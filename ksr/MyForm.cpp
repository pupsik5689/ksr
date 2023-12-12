#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  system("chcp 1251");
  Ksr::MyForm form;
  Application::Run(% form);
}



double Ksr::MyForm::didx(double x, double i, double l, double r, double v)
{
  return (v - r * i) / l;
}

double Ksr::MyForm::rk(double x, double i, double h, double l, double r, double v)
{
  double k1, k2, k3, k4;


  k1 = didx(x, i, l, r, v);
  k2 = didx(x + h / 2., x + k1 * h / 2., l, r, v);
  k3 = didx(x + h / 2., x + k2 * h / 2., l, r, v);
  k4 = didx(x + h, x + k3 * h, l, r, v);

  i = i + (h / 6.) * (k1 + 2 * k2 + 2 * k3 + k4);			//s shagom h
  
  return i;
}

double Ksr::MyForm::rk2(double x, double i, double h, double l, double r, double v)
{
  double k1, k2, k3, k4;

  for (int j = 0; j < 2; j++)
  {
    k1 = didx(x, i, l, r, v);
    k2 = didx(x + h / 2., x + k1 * h / 2., l, r, v);
    k3 = didx(x + h / 2., x + k2 * h / 2., l, r, v);
    k4 = didx(x + h, x + k3 * h, l, r, v);

    i = i + (h / 6.) * (k1 + 2 * k2 + 2 * k3 + k4);
  }
  return i;
}
