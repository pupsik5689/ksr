#pragma once

#include "Task.h"
#include "Result.h"
#include <array>

namespace Ksr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->AxisX->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea1->AxisX->Title = L"X";
			chartArea1->AxisX2->MajorTickMark->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea1->AxisY->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea1->AxisY->Title = L"V";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(438, 25);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(446, 393);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			this->chart2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			chartArea2->AxisX->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea2->AxisX->Title = L"X";
			chartArea2->AxisY->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea2->AxisY->Title = L"V\'";
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(890, 25);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(446, 393);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			this->chart3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			chartArea3->AxisX->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea3->AxisX->Title = L"V";
			chartArea3->AxisY->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea3->AxisY->Title = L"V\'";
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(438, 424);
			this->chart3->Name = L"chart3";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart3->Series->Add(series3);
			this->chart3->Size = System::Drawing::Size(898, 393);
			this->chart3->TabIndex = 2;
			this->chart3->Text = L"chart3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 26);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Описание задачи";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(162, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(252, 408);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Начальные условия";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 338);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(152, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Точность выхода на границу";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(10, 354);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 18;
			this->textBox10->Text = L"0,000001";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 287);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(145, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Контроль лок.погрешности";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(10, 303);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 16;
			this->textBox9->Text = L"0,000001";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 226);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Правая граница";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(10, 242);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 14;
			this->textBox8->Text = L"2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(143, 178);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Макс. число шагов";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(146, 194);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 12;
			this->textBox7->Text = L"10000";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 178);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Начальный шаг";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(10, 194);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 10;
			this->textBox6->Text = L"0,001";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 144);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"U\'(0) =";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(52, 141);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 8;
			this->textBox5->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"U(0) = ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(52, 115);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"7,5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"m =";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(52, 89);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"4,5";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"f =";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(52, 63);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"0,3";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"k =";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(52, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"175";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 58);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Ввести значения";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(13, 91);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Изменить значения";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(13, 263);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(143, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Результаты вычислений";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->richTextBox1->Location = System::Drawing::Point(13, 445);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(401, 112);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(13, 121);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(111, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Постоянный шаг";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1348, 828);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"КСР";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		Result^ res = gcnew Result();


		double dv1dx(double x, double v1, double v2);
		double dv2dx(double x, double v1, double v2, double k, double f, double m);

		std::array<double, 2> rk(double x0, double h, double v1, double v2, double k, double f, double m);
		std::array<double, 2> rk2(double x0, double hrk2, double v1, double v2, double k, double f, double m);

	

		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			button3->Hide();
			res->Hide();
			chart1->Series[0]->IsVisibleInLegend = false;
			chart2->Series[0]->IsVisibleInLegend = false;
			chart3->Series[0]->IsVisibleInLegend = false;
			
		}



		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
		
			Task^ f2 = gcnew Task();
			f2->Show();
		
		}




		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			res->dataGridView1->Rows->Clear();
			if (button2->Text == "Ввести значения")
			{
				button2->Text = "Вычислить";

				textBox1->Enabled = false;			textBox2->Enabled = false;			textBox3->Enabled = false;
				textBox4->Enabled = false;			textBox5->Enabled = false;			textBox6->Enabled = false;
				textBox7->Enabled = false;			textBox8->Enabled = false;			textBox9->Enabled = false;
				textBox10->Enabled = false;

				chart1->Series[0]->Points->Clear();
				chart2->Series[0]->Points->Clear();
				chart3->Series[0]->Points->Clear();

				button3->Show();

				return;
			}

			richTextBox1->Text = "";
			std::array<double, 2> v0;  // итог       [0] - vi   [1] - v'i
			std::array<double, 2> v1;  // шаг h			 
			std::array<double, 2> v2;  // шаг h/2

			double k = Convert::ToDouble(textBox1->Text);
			double f = Convert::ToDouble(textBox2->Text);
			double m = Convert::ToDouble(textBox3->Text);

			v0[0] = Convert::ToDouble(textBox4->Text);
			v0[1] = Convert::ToDouble(textBox5->Text);

			

			chart1->Series[0]->Points->Clear();
			chart2->Series[0]->Points->Clear();
			chart3->Series[0]->Points->Clear();

			double h = Convert::ToDouble(textBox6->Text);
			int NMax = Convert::ToDouble(textBox7->Text);
			double b = Convert::ToDouble(textBox8->Text);

			double eps = Convert::ToDouble(textBox9->Text);
			double granica = Convert::ToDouble(textBox10->Text);

			chart1->ChartAreas[0]->AxisX->Minimum = 0;
			chart1->ChartAreas[0]->AxisX->Maximum = (int)(b) + 1;
			chart1->ChartAreas[0]->AxisX->Interval = 0.5;

			chart2->ChartAreas[0]->AxisX->Minimum = 0;
			chart2->ChartAreas[0]->AxisX->Maximum = (int)(b) + 1;
			chart2->ChartAreas[0]->AxisX->Interval = 0.5;

			chart3->ChartAreas[0]->AxisX->Maximum = (int)(v0[0]) + 1;
			chart3->ChartAreas[0]->AxisX->Interval = 0.5;
			chart3->ChartAreas[0]->AxisX->Minimum = -1*(int)(v0[0]) - 1;

			double s;

			int i = 0;

			double x = 0.;
			int delenie = 0, udvoenie = 0;
			res->dataGridView1->Rows->Add();

			res->dataGridView1[0, 0]->Value = i;
			res->dataGridView1[1, 0]->Value = 0;
			res->dataGridView1[2, 0]->Value = v0[0];
			res->dataGridView1[3, 0]->Value = v0[0];
			res->dataGridView1[4, 0]->Value = 0;
			res->dataGridView1[5, 0]->Value = 0;
			res->dataGridView1[6, 0]->Value = h;
			res->dataGridView1[7, 0]->Value = 0;
			res->dataGridView1[8, 0]->Value = 0;


			switch (checkBox1->Checked)
			{
			case false:
			{
				while ((i < NMax) && (x <= b))
				{
					chart1->Series[0]->Points->AddXY(x, v0[0]);
					chart2->Series[0]->Points->AddXY(x, v0[1]);
					chart3->Series[0]->Points->AddXY(v0[0], v0[1]);



					v1 = rk(x, h, v0[0], v0[1], k, f, m);
					v2 = rk2(x, h, v0[0], v0[1], k, f, m);
					x += h;

					if ((x <= b) && (x >= b - granica))
					{
						if ((abs((v2[0] - v1[0]) / 15.) <= eps) && (abs((v2[0] - v1[0]) / 15.) >= eps / pow(2, 17)))// || ((abs((v2[1] - v1[1]) / 15.) <= eps) && (abs((v2[1] - v1[1]) / 15.) >= eps / pow(2, 17))))
						{
							i++;
							s = sqrt(std::max(pow((abs(v2[0] - v1[0]) / 15.) * 16., 2), pow((abs(v2[1] - v1[1]) / 15.) * 16., 2)));
							res->dataGridView1->Rows->Add(i, x, v1[0], v2[0], abs(v1[0] - v2[0]), s, h, 0, 0);
							v0[0] = v1[0];
							v0[1] = v1[1];
							v2[0] = v0[0];
							v2[1] = v0[1];

							chart1->Series[0]->Points->AddXY(x, v0[0]);
							chart2->Series[0]->Points->AddXY(x, v0[1]);
							chart3->Series[0]->Points->AddXY(v0[0], v0[1]);
							break;
						}
						else
							if (abs((v2[0] - v1[0]) / 15.) < eps / pow(2, 17)) //|| (abs((v2[1] - v1[1]) / 15.) < eps / pow(2, 17)))
							{
								i++;
								h = h * 2.;
								udvoenie += 1;
								s = sqrt(std::max(pow((abs(v2[0] - v1[0]) / 15.) * 16., 2), pow((abs(v2[1] - v1[1]) / 15.) * 16., 2)));
								res->dataGridView1->Rows->Add(i, x, v1[0], v2[0], abs(v1[0] - v2[0]), s, h, 0, 1);
								v0[0] = v1[0];
								v0[1] = v1[1];
								v2[0] = v0[0];
								v2[1] = v0[1];

								chart1->Series[0]->Points->AddXY(x, v0[0]);
								chart2->Series[0]->Points->AddXY(x, v0[1]);
								chart3->Series[0]->Points->AddXY(v0[0], v0[1]);
								break;
							}
							else
							{
								x -= h;
								h = h / 2.;
								delenie += 1;
								s = sqrt(std::max(pow((abs(v2[0] - v1[0]) / 15.) * 16., 2), pow((abs(v2[1] - v1[1]) / 15.) * 16., 2)));
								res->dataGridView1->Rows->Add(i, x, v1[0], v2[0], abs(v1[0] - v2[0]), s, h, 1, 0);

								v1[0] = v0[0];
								v1[1] = v0[1];
								v2[0] = v0[0];
								v2[1] = v0[1];
							};

					}
					else
						if (x < b - granica)
						{

							if ((abs((v2[0] - v1[0]) / 15.) <= eps) && (abs((v2[0] - v1[0]) / 15.) >= eps / pow(2, 17)))// || ((abs((v2[1] - v1[1]) / 15.) <= eps) && (abs((v2[1] - v1[1]) / 15.) >= eps / pow(2, 17))))
							{
								i++;
								s = sqrt(std::max(pow((abs(v2[0] - v1[0]) / 15.) * 16., 2), pow((abs(v2[1] - v1[1]) / 15.) * 16., 2)));
								res->dataGridView1->Rows->Add(i, x, v1[0], v2[0], abs(v1[0] - v2[0]), s, h, 0, 0);
								v0[0] = v1[0];
								v0[1] = v1[1];
								v2[0] = v0[0];
								v2[1] = v0[1];
							}		//kontrol' pogreshnosti
							else
								if (abs((v2[0] - v1[0]) / 15.) < eps / pow(2, 17))// || (abs((v2[1] - v1[1]) / 15.) < eps / pow(2, 17)))
								{
									i++;
									h = h * 2;
									udvoenie += 1;
									s = sqrt(std::max(pow((abs(v2[0] - v1[0]) / 15.) * 16., 2), pow((abs(v2[1] - v1[1]) / 15.) * 16., 2)));
									res->dataGridView1->Rows->Add(i, x, v1[0], v2[0], abs(v1[0] - v2[0]), s, h, 0, 1);
									v0[0] = v1[0];
									v0[1] = v1[1];
									v2[0] = v0[0];
									v2[1] = v0[1];
								}
								else
								{
									x -= h;
									h = h / 2.;
									delenie += 1;
									s = sqrt(std::max(pow((abs(v2[0] - v1[0]) / 15.) * 16., 2), pow((abs(v2[1] - v1[1]) / 15.) * 16., 2)));
									res->dataGridView1->Rows->Add(i, x, v1[0], v2[0], abs(v1[0] - v2[0]), s, h, 1, 0);
									v1[0] = v0[0];
									v1[1] = v0[1];
									v2[0] = v0[0];
									v2[1] = v0[1];
								}
						}



				}
			}

			case true:
			{
				while ((i < NMax) && (x <= b))
				{
					chart1->Series[0]->Points->AddXY(x, v0[0]);
					chart2->Series[0]->Points->AddXY(x, v0[1]);
					chart3->Series[0]->Points->AddXY(v0[0], v0[1]);



					v0 = rk(x, h, v0[0], v0[1], k, f, m);
					v1 = rk(x, h, v0[0], v0[1], k, f, m);
					v2 = rk2(x, h, v0[0], v0[1], k, f, m);

					s = sqrt(std::max(pow((abs(v2[0] - v1[0]) / 15.) * 16., 2), pow((abs(v2[1] - v1[1]) / 15.) * 16., 2)));
					res->dataGridView1->Rows->Add(i, x, v1[0], v2[0], abs(v1[0] - v2[0]), s, h, 0, 0);
					
					x += h;
					i++;
				}

			}

			}
			

			button2->Text = "Ввести значения";
			button3->Hide();
			textBox1->Enabled = true;			textBox2->Enabled = true;			textBox3->Enabled = true;
			textBox4->Enabled = true;			textBox5->Enabled = true;			textBox6->Enabled = true;
			textBox7->Enabled = true;			textBox8->Enabled = true;			textBox9->Enabled = true;
			textBox10->Enabled = true;

			richTextBox1->Text += "№ Варианта задания: 5" + "\n";
			richTextBox1->Text += "Тип задачи: уравнение 2-го порядка" + "\n";
			richTextBox1->Text += "Метод: Рунге-Кутты 4-го порядка" + "\n";
			richTextBox1->Text += "N = " + i + "\n";
			richTextBox1->Text += "Число удвоений = " + udvoenie + "\n";
			richTextBox1->Text += "Число делений = " + delenie + "\n";


		}


		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			button2->Text = "Ввести значения";

			textBox1->Enabled = true;			textBox2->Enabled = true;			textBox3->Enabled = true;
			textBox4->Enabled = true;			textBox5->Enabled = true;			textBox6->Enabled = true;
			textBox7->Enabled = true;			textBox8->Enabled = true;			textBox9->Enabled = true;
			textBox10->Enabled = true;

			button3->Hide();
		}



		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			res->ShowDialog();
		}


};

}
