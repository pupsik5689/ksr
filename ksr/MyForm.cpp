#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);

  Ksr::MyForm form;
  Application::Run(% form);
}



double Ksr::MyForm::dv1dx(double x, double v1, double v2)
{
  return v2;
}

double Ksr::MyForm::dv2dx(double x, double v1, double v2, double k, double f, double m)
{
  if (v2 >= 0)
  {
    return (-1. * m * 9.81 * f - k * v1) / m;
  }

  return (m * 9.81 * f - k * v1)/m;
}

std::array<double, 2> Ksr::MyForm::rk(double x0, double h, double v1, double v2, double k, double f, double m)
{
  double k11, k12, k13, k14;
  double k21, k22, k23, k24;

  k11 = dv1dx(x0, v1, v2);
  k21 = dv2dx(x0, v1, v2, k, f, m);

  k12 = dv1dx(x0 + h / 2., v1 + k11 * h / 2., v2 + k21 * h / 2.);
  k22 = dv2dx(x0 + h / 2., v1 + k11 * h / 2., v2 + k21 * h / 2., k, f, m);

  k13 = dv1dx(x0 + h / 2., v1 + k12 * h / 2., v2 + k22 * h / 2.);
  k23 = dv2dx(x0 + h / 2., v1 + k12 * h / 2., v2 + k22 * h / 2., k, f, m);

  k14 = dv1dx(x0 + h, v1 + k13 * h, v2 + k23 * h);
  k24 = dv2dx(x0 + h, v1 + k13 * h, v2 + k23 * h, k, f, m);



  return std::array<double, 2>() = { v1 + (h / 6.) * (k11 + 2 * k12 + 2 * k13 + k14), v2 + (h / 6.) * (k21 + 2 * k22 + 2 * k23 + k24)};
}

std::array<double, 2> Ksr::MyForm::rk2(double x0, double hrk2, double v1, double v2, double k, double f, double m)
{
  double k11, k12, k13, k14;
  double k21, k22, k23, k24;

  double h = hrk2 / 2.;
  double x = x0;

  std::array<double, 2> res;
  res[0] = v1;
  res[1] = v2;

  for (int i = 0; i < 2; i++)
  {
    k11 = dv1dx(x, res[0], res[1]);
    k21 = dv2dx(x, res[0], res[1], k, f, m);

    k12 = dv1dx(x + h / 2., res[0] + k11 * h / 2., res[1] + k21 * h / 2.);
    k22 = dv2dx(x + h / 2., res[0] + k11 * h / 2., res[1] + k21 * h / 2., k, f, m);

    k13 = dv1dx(x + h / 2., res[0] + k12 * h / 2., res[1] + k22 * h / 2.);
    k23 = dv2dx(x + h / 2., res[0] + k12 * h / 2., res[1] + k22 * h / 2., k, f, m);

    k14 = dv1dx(x + h, res[0] + k13 * h, res[1] + k23 * h);
    k24 = dv2dx(x + h, res[0] + k13 * h, res[1] + k23 * h, k, f, m);

    res[0] = res[0] + (h / 6.) * (k11 + 2 * k12 + 2 * k13 + k14);
    res[1] = res[1] + (h / 6.) * (k21 + 2 * k22 + 2 * k23 + k24);

    x += h;
  }



  return res;
}
