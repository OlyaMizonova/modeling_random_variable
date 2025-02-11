#pragma once
#include"names_of_functions.h"
extern std::vector<int>ns;
extern std::vector<int>ys;
extern std::vector<int>xs;
extern std::vector<double> p;

namespace lab2TerVerForm {

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
	private: System::Windows::Forms::Label^ task;
	protected:
	private: System::Windows::Forms::DataGridView^ table1st;
	private: System::Windows::Forms::Label^ enter_n;
	private: System::Windows::Forms::Label^ enter_NN;
	private: System::Windows::Forms::Label^ enter_M;


	private: System::Windows::Forms::Label^ enter_r;
	private: System::Windows::Forms::TextBox^ get_n;
	private: System::Windows::Forms::TextBox^ get_NN;
	private: System::Windows::Forms::TextBox^ get_M;
	private: System::Windows::Forms::TextBox^ get_r;
	private: System::Windows::Forms::Button^ firstTask;
	private: System::Windows::Forms::Button^ secondTask;
	private: System::Windows::Forms::DataGridView^ table2nd;
	private: System::Windows::Forms::DataGridView^ table3rd;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ maxDiffer;

	private: System::Windows::Forms::PictureBox^ graphicTrue;

	private: System::Windows::Forms::PictureBox^ Fn;
	private: System::Windows::Forms::PictureBox^ Fn2;
	private: System::Windows::Forms::Label^ setD;
	private: System::Windows::Forms::Button^ thirdTask;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ get_k;
	private: System::Windows::Forms::TextBox^ get_zs;
	private: System::Windows::Forms::DataGridView^ tableQs;
	private: System::Windows::Forms::Label^ enter_a;
	private: System::Windows::Forms::TextBox^ get_a;
	private: System::Windows::Forms::Label^ set_R0;
	private: System::Windows::Forms::Label^ F_R00;
	private: System::Windows::Forms::Label^ takeornot;
	private: System::Windows::Forms::Label^ F0_is_eq_to;
	private: System::Windows::Forms::PictureBox^ pictureBlue;
	private: System::Windows::Forms::PictureBox^ pictureGreen;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->task = (gcnew System::Windows::Forms::Label());
			this->table1st = (gcnew System::Windows::Forms::DataGridView());
			this->enter_n = (gcnew System::Windows::Forms::Label());
			this->enter_NN = (gcnew System::Windows::Forms::Label());
			this->enter_M = (gcnew System::Windows::Forms::Label());
			this->enter_r = (gcnew System::Windows::Forms::Label());
			this->get_n = (gcnew System::Windows::Forms::TextBox());
			this->get_NN = (gcnew System::Windows::Forms::TextBox());
			this->get_M = (gcnew System::Windows::Forms::TextBox());
			this->get_r = (gcnew System::Windows::Forms::TextBox());
			this->firstTask = (gcnew System::Windows::Forms::Button());
			this->secondTask = (gcnew System::Windows::Forms::Button());
			this->table2nd = (gcnew System::Windows::Forms::DataGridView());
			this->table3rd = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->maxDiffer = (gcnew System::Windows::Forms::Label());
			this->graphicTrue = (gcnew System::Windows::Forms::PictureBox());
			this->Fn = (gcnew System::Windows::Forms::PictureBox());
			this->Fn2 = (gcnew System::Windows::Forms::PictureBox());
			this->setD = (gcnew System::Windows::Forms::Label());
			this->thirdTask = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->get_k = (gcnew System::Windows::Forms::TextBox());
			this->get_zs = (gcnew System::Windows::Forms::TextBox());
			this->tableQs = (gcnew System::Windows::Forms::DataGridView());
			this->enter_a = (gcnew System::Windows::Forms::Label());
			this->get_a = (gcnew System::Windows::Forms::TextBox());
			this->set_R0 = (gcnew System::Windows::Forms::Label());
			this->F_R00 = (gcnew System::Windows::Forms::Label());
			this->takeornot = (gcnew System::Windows::Forms::Label());
			this->F0_is_eq_to = (gcnew System::Windows::Forms::Label());
			this->pictureBlue = (gcnew System::Windows::Forms::PictureBox());
			this->pictureGreen = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table1st))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table2nd))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table3rd))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphicTrue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Fn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Fn2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableQs))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBlue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureGreen))->BeginInit();
			this->SuspendLayout();
			// 
			// task
			// 
			this->task->AutoSize = true;
			this->task->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->task->Location = System::Drawing::Point(36, 40);
			this->task->Name = L"task";
			this->task->Size = System::Drawing::Size(875, 18);
			this->task->TabIndex = 0;
			this->task->Text = L"В партии из N лампочек M перегоревших. Случайная величина - число перегоревших ла"
				L"мпочек среди r выбранных наудачу.";
			this->task->UseMnemonic = false;
			// 
			// table1st
			// 
			this->table1st->AllowUserToAddRows = false;
			this->table1st->AllowUserToDeleteRows = false;
			this->table1st->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->table1st->BackgroundColor = System::Drawing::SystemColors::Window;
			this->table1st->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->table1st->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table1st->GridColor = System::Drawing::SystemColors::Control;
			this->table1st->Location = System::Drawing::Point(39, 127);
			this->table1st->Name = L"table1st";
			this->table1st->Size = System::Drawing::Size(567, 143);
			this->table1st->TabIndex = 1;
			// 
			// enter_n
			// 
			this->enter_n->Location = System::Drawing::Point(841, 71);
			this->enter_n->Name = L"enter_n";
			this->enter_n->Size = System::Drawing::Size(171, 29);
			this->enter_n->TabIndex = 2;
			this->enter_n->Text = L"Введите число экспериментов для моделирования";
			// 
			// enter_NN
			// 
			this->enter_NN->Location = System::Drawing::Point(841, 162);
			this->enter_NN->Name = L"enter_NN";
			this->enter_NN->Size = System::Drawing::Size(151, 28);
			this->enter_NN->TabIndex = 3;
			this->enter_NN->Text = L"Введите N - число лампочек в партии";
			// 
			// enter_M
			// 
			this->enter_M->Location = System::Drawing::Point(841, 239);
			this->enter_M->Name = L"enter_M";
			this->enter_M->Size = System::Drawing::Size(145, 31);
			this->enter_M->TabIndex = 4;
			this->enter_M->Text = L"Введите М - число перегоревших лампочек";
			// 
			// enter_r
			// 
			this->enter_r->Location = System::Drawing::Point(841, 329);
			this->enter_r->Name = L"enter_r";
			this->enter_r->Size = System::Drawing::Size(127, 28);
			this->enter_r->TabIndex = 5;
			this->enter_r->Text = L"Введите r  - число выбранных лампочек";
			// 
			// get_n
			// 
			this->get_n->Location = System::Drawing::Point(844, 103);
			this->get_n->Name = L"get_n";
			this->get_n->Size = System::Drawing::Size(100, 20);
			this->get_n->TabIndex = 6;
			this->get_n->Text = L"1000";
			this->get_n->TextChanged += gcnew System::EventHandler(this, &MyForm::get_n_TextChanged);
			// 
			// get_NN
			// 
			this->get_NN->Location = System::Drawing::Point(844, 193);
			this->get_NN->Name = L"get_NN";
			this->get_NN->Size = System::Drawing::Size(100, 20);
			this->get_NN->TabIndex = 7;
			this->get_NN->Text = L"10";
			this->get_NN->TextChanged += gcnew System::EventHandler(this, &MyForm::get_NN_TextChanged);
			// 
			// get_M
			// 
			this->get_M->Location = System::Drawing::Point(844, 273);
			this->get_M->Name = L"get_M";
			this->get_M->Size = System::Drawing::Size(100, 20);
			this->get_M->TabIndex = 8;
			this->get_M->Text = L"4";
			this->get_M->TextChanged += gcnew System::EventHandler(this, &MyForm::get_M_TextChanged);
			// 
			// get_r
			// 
			this->get_r->Location = System::Drawing::Point(844, 360);
			this->get_r->Name = L"get_r";
			this->get_r->Size = System::Drawing::Size(100, 20);
			this->get_r->TabIndex = 9;
			this->get_r->Text = L"5";
			this->get_r->TextChanged += gcnew System::EventHandler(this, &MyForm::get_r_TextChanged);
			// 
			// firstTask
			// 
			this->firstTask->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->firstTask->Location = System::Drawing::Point(712, 492);
			this->firstTask->Name = L"firstTask";
			this->firstTask->Size = System::Drawing::Size(152, 67);
			this->firstTask->TabIndex = 10;
			this->firstTask->Text = L"Вывести таблицу для первого пункта";
			this->firstTask->UseVisualStyleBackColor = true;
			this->firstTask->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// secondTask
			// 
			this->secondTask->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->secondTask->Location = System::Drawing::Point(874, 492);
			this->secondTask->Name = L"secondTask";
			this->secondTask->Size = System::Drawing::Size(152, 67);
			this->secondTask->TabIndex = 11;
			this->secondTask->Text = L"Вывести таблицы для второго пункта";
			this->secondTask->UseVisualStyleBackColor = true;
			this->secondTask->Click += gcnew System::EventHandler(this, &MyForm::secondTask_Click);
			// 
			// table2nd
			// 
			this->table2nd->AllowUserToAddRows = false;
			this->table2nd->AllowUserToDeleteRows = false;
			this->table2nd->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->table2nd->BackgroundColor = System::Drawing::SystemColors::Window;
			this->table2nd->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->table2nd->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table2nd->GridColor = System::Drawing::SystemColors::Control;
			this->table2nd->Location = System::Drawing::Point(21, 288);
			this->table2nd->Name = L"table2nd";
			this->table2nd->Size = System::Drawing::Size(701, 60);
			this->table2nd->TabIndex = 12;
			// 
			// table3rd
			// 
			this->table3rd->AllowUserToAddRows = false;
			this->table3rd->AllowUserToDeleteRows = false;
			this->table3rd->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->table3rd->BackgroundColor = System::Drawing::SystemColors::Window;
			this->table3rd->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->table3rd->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table3rd->GridColor = System::Drawing::SystemColors::Control;
			this->table3rd->Location = System::Drawing::Point(21, 117);
			this->table3rd->Name = L"table3rd";
			this->table3rd->Size = System::Drawing::Size(663, 150);
			this->table3rd->TabIndex = 13;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(712, 427);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(232, 59);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// maxDiffer
			// 
			this->maxDiffer->AutoSize = true;
			this->maxDiffer->Location = System::Drawing::Point(929, 446);
			this->maxDiffer->Name = L"maxDiffer";
			this->maxDiffer->Size = System::Drawing::Size(0, 13);
			this->maxDiffer->TabIndex = 15;
			// 
			// graphicTrue
			// 
			this->graphicTrue->Location = System::Drawing::Point(31, 407);
			this->graphicTrue->Name = L"graphicTrue";
			this->graphicTrue->Size = System::Drawing::Size(537, 298);
			this->graphicTrue->TabIndex = 17;
			this->graphicTrue->TabStop = false;
			// 
			// Fn
			// 
			this->Fn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Fn.Image")));
			this->Fn->Location = System::Drawing::Point(21, 342);
			this->Fn->Name = L"Fn";
			this->Fn->Size = System::Drawing::Size(95, 48);
			this->Fn->TabIndex = 19;
			this->Fn->TabStop = false;
			this->Fn->Visible = false;
			// 
			// Fn2
			// 
			this->Fn2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Fn2.Image")));
			this->Fn2->Location = System::Drawing::Point(364, 342);
			this->Fn2->Name = L"Fn2";
			this->Fn2->Size = System::Drawing::Size(99, 48);
			this->Fn2->TabIndex = 20;
			this->Fn2->TabStop = false;
			this->Fn2->Visible = false;
			// 
			// setD
			// 
			this->setD->AutoSize = true;
			this->setD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->setD->Location = System::Drawing::Point(550, 351);
			this->setD->Name = L"setD";
			this->setD->Size = System::Drawing::Size(0, 18);
			this->setD->TabIndex = 21;
			// 
			// thirdTask
			// 
			this->thirdTask->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->thirdTask->Location = System::Drawing::Point(792, 565);
			this->thirdTask->Name = L"thirdTask";
			this->thirdTask->Size = System::Drawing::Size(152, 67);
			this->thirdTask->TabIndex = 22;
			this->thirdTask->Text = L"Третий пункт";
			this->thirdTask->UseVisualStyleBackColor = true;
			this->thirdTask->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(638, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 16);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Введите число разбиений k";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(638, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 39);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Введите границы разбиения (k-1 штук)";
			this->label2->Visible = false;
			// 
			// get_k
			// 
			this->get_k->Location = System::Drawing::Point(641, 103);
			this->get_k->Name = L"get_k";
			this->get_k->Size = System::Drawing::Size(100, 20);
			this->get_k->TabIndex = 25;
			this->get_k->Text = L"1";
			this->get_k->Visible = false;
			// 
			// get_zs
			// 
			this->get_zs->Location = System::Drawing::Point(641, 193);
			this->get_zs->Name = L"get_zs";
			this->get_zs->Size = System::Drawing::Size(180, 20);
			this->get_zs->TabIndex = 26;
			this->get_zs->Text = L"3";
			this->get_zs->Visible = false;
			// 
			// tableQs
			// 
			this->tableQs->AllowUserToAddRows = false;
			this->tableQs->AllowUserToDeleteRows = false;
			this->tableQs->BackgroundColor = System::Drawing::SystemColors::Window;
			this->tableQs->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tableQs->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tableQs->Location = System::Drawing::Point(21, 311);
			this->tableQs->Name = L"tableQs";
			this->tableQs->Size = System::Drawing::Size(775, 90);
			this->tableQs->TabIndex = 27;
			// 
			// enter_a
			// 
			this->enter_a->AutoSize = true;
			this->enter_a->Location = System::Drawing::Point(641, 239);
			this->enter_a->Name = L"enter_a";
			this->enter_a->Size = System::Drawing::Size(171, 13);
			this->enter_a->TabIndex = 28;
			this->enter_a->Text = L"Введите уровень значимости (a)";
			this->enter_a->Visible = false;
			// 
			// get_a
			// 
			this->get_a->Location = System::Drawing::Point(641, 262);
			this->get_a->Name = L"get_a";
			this->get_a->Size = System::Drawing::Size(100, 20);
			this->get_a->TabIndex = 29;
			this->get_a->Text = L"0,5";
			this->get_a->Visible = false;
			// 
			// set_R0
			// 
			this->set_R0->AutoSize = true;
			this->set_R0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->set_R0->Location = System::Drawing::Point(21, 427);
			this->set_R0->Name = L"set_R0";
			this->set_R0->Size = System::Drawing::Size(0, 20);
			this->set_R0->TabIndex = 30;
			this->set_R0->Visible = false;
			// 
			// F_R00
			// 
			this->F_R00->AutoSize = true;
			this->F_R00->Location = System::Drawing::Point(25, 492);
			this->F_R00->Name = L"F_R00";
			this->F_R00->Size = System::Drawing::Size(0, 13);
			this->F_R00->TabIndex = 31;
			this->F_R00->Visible = false;
			// 
			// takeornot
			// 
			this->takeornot->AutoSize = true;
			this->takeornot->Location = System::Drawing::Point(21, 520);
			this->takeornot->Name = L"takeornot";
			this->takeornot->Size = System::Drawing::Size(0, 13);
			this->takeornot->TabIndex = 32;
			this->takeornot->Visible = false;
			// 
			// F0_is_eq_to
			// 
			this->F0_is_eq_to->AutoSize = true;
			this->F0_is_eq_to->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->F0_is_eq_to->Location = System::Drawing::Point(31, 618);
			this->F0_is_eq_to->Name = L"F0_is_eq_to";
			this->F0_is_eq_to->Size = System::Drawing::Size(16, 18);
			this->F0_is_eq_to->TabIndex = 33;
			this->F0_is_eq_to->Text = L"0";
			this->F0_is_eq_to->Visible = false;
			// 
			// pictureBlue
			// 
			this->pictureBlue->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBlue.Image")));
			this->pictureBlue->Location = System::Drawing::Point(122, 351);
			this->pictureBlue->Name = L"pictureBlue";
			this->pictureBlue->Size = System::Drawing::Size(75, 39);
			this->pictureBlue->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBlue->TabIndex = 34;
			this->pictureBlue->TabStop = false;
			this->pictureBlue->Visible = false;
			// 
			// pictureGreen
			// 
			this->pictureGreen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureGreen.Image")));
			this->pictureGreen->Location = System::Drawing::Point(469, 360);
			this->pictureGreen->Name = L"pictureGreen";
			this->pictureGreen->Size = System::Drawing::Size(73, 15);
			this->pictureGreen->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureGreen->TabIndex = 35;
			this->pictureGreen->TabStop = false;
			this->pictureGreen->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1038, 733);
			this->Controls->Add(this->pictureGreen);
			this->Controls->Add(this->pictureBlue);
			this->Controls->Add(this->F0_is_eq_to);
			this->Controls->Add(this->takeornot);
			this->Controls->Add(this->F_R00);
			this->Controls->Add(this->set_R0);
			this->Controls->Add(this->get_a);
			this->Controls->Add(this->enter_a);
			this->Controls->Add(this->tableQs);
			this->Controls->Add(this->get_zs);
			this->Controls->Add(this->get_k);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->thirdTask);
			this->Controls->Add(this->setD);
			this->Controls->Add(this->Fn2);
			this->Controls->Add(this->Fn);
			this->Controls->Add(this->graphicTrue);
			this->Controls->Add(this->maxDiffer);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->table3rd);
			this->Controls->Add(this->table2nd);
			this->Controls->Add(this->secondTask);
			this->Controls->Add(this->firstTask);
			this->Controls->Add(this->get_r);
			this->Controls->Add(this->get_M);
			this->Controls->Add(this->get_NN);
			this->Controls->Add(this->get_n);
			this->Controls->Add(this->enter_r);
			this->Controls->Add(this->enter_M);
			this->Controls->Add(this->enter_NN);
			this->Controls->Add(this->enter_n);
			this->Controls->Add(this->table1st);
			this->Controls->Add(this->task);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table1st))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table2nd))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table3rd))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphicTrue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Fn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Fn2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableQs))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBlue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureGreen))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		enter_a->Visible = false;
		get_a->Visible = false;
		graphicTrue->Visible = false;
		//graphicExp->Visible = false;
		table2nd->Visible = false;
		table3rd->Visible = false;
		table1st->Visible = true;
		pictureBox1->Visible = false;
		maxDiffer->Visible = false;
		Fn->Visible = false;
		Fn2->Visible = false;
		setD->Visible = false;
		label1->Visible = false;
		label2->Visible = false;
		get_k->Visible = false;
		get_zs->Visible = false;
		tableQs->Visible = false;
		set_R0->Visible = false;
		F_R00->Visible = false;
		takeornot->Visible = false;
		F0_is_eq_to->Visible = false;
		pictureBlue->Visible = false;
		pictureGreen->Visible = false;
		table1st->Rows->Clear();
		table1st->Columns->Clear();
		int n = Convert::ToInt32(get_n->Text);
		int N = Convert::ToInt32(get_NN->Text);
		int M = Convert::ToInt32(get_M->Text);
		int r = Convert::ToInt32(get_r->Text);
		int low_brdr = max(0, r + M - N);
		int high_brdr = min(M, r);
		int number_of_k = high_brdr - low_brdr + 1;
		getTable1st(p, ns, ys, xs, N, M, r, n);
		table1st->Columns->Add("a", " ");
		for (int i = 0; i < number_of_k; i++) {
			table1st->Columns->Add(Convert::ToString(i),"k"+ Convert::ToString(i));
		}
		table1st->Rows->Add();
		table1st->Rows->Add();
		table1st->Rows->Add();
		table1st->Rows[0]->Cells[0]->Value = "ys";
		table1st->Rows[1]->Cells[0]->Value = "ns";
		table1st->Rows[2]->Cells[0]->Value = "ns / n";
		for (int i = 1; i <= number_of_k; i++) {
			table1st->Rows[0]->Cells[i]->Value = ys[i-1];
			table1st->Rows[1]->Cells[i]->Value = ns[i-1];
			table1st->Rows[2]->Cells[i]->Value = (double(ns[i-1])/n);
		}
		table1st->CurrentCell->Selected = false;
	}

private: System::Void secondTask_Click(System::Object^ sender, System::EventArgs^ e) {
	Fn->Visible = true;
	Fn2->Visible = true;
	table2nd->Rows->Clear();
	table2nd->Columns->Clear();
	table3rd->Rows->Clear();
	table3rd->Columns->Clear();
	table1st->Visible = false;
	table2nd->Visible = true;
	table3rd->Visible = true;
	label1->Visible = false;
	label2->Visible = false;
	get_k->Visible = false;
	get_zs->Visible = false;
	tableQs->Visible = false;
	enter_a->Visible = false;
	get_a->Visible = false;
	set_R0->Visible = false;
	F_R00->Visible = false;
	takeornot->Visible = false;
	F0_is_eq_to->Visible = false;
	graphicTrue->Visible = true;
	pictureBlue->Visible = true;
	pictureGreen->Visible = true;
	//graphicExp->Visible = true;

	int n = Convert::ToInt32(get_n->Text);
	int N = Convert::ToInt32(get_NN->Text);
	int M = Convert::ToInt32(get_M->Text);
	int r = Convert::ToInt32(get_r->Text);
	int low_brdr = max(0, r + M - N);
	int high_brdr = min(M, r);
	int number_of_k = high_brdr - low_brdr + 1;

	int ks;
	double Dn, x_mid, S, R, Me;
	getTable2nd(&ks, &x_mid, &Dn, &S, &R, &Me, p, ns, ys, xs, N, M, r, n);
	table2nd->Columns->Add("0","E_n");
	table2nd->Columns->Add("1", "x_mid");
	table2nd->Columns->Add("2", "|E_n-x_mid|");
	table2nd->Columns->Add("3", "D_n");
	table2nd->Columns->Add("4", "S^2");
	table2nd->Columns->Add("5", "|D_n-S^2|");
	table2nd->Columns->Add("6", "Me");
	table2nd->Columns->Add("7", "R");

	table2nd->Rows->Add(Convert::ToString(ks),Convert::ToString(x_mid), Convert::ToString(abs(ks-x_mid)), Convert::ToString(Dn), 
		Convert::ToString(S), Convert::ToString(abs(S-Dn)), Convert::ToString(Me), Convert::ToString(R));
	table3rd->Columns->Add("names"," ");
	for (int i = 0; i < number_of_k; i++) {
		table3rd->Columns->Add(Convert::ToString(i), "k" + Convert::ToString(i));
	}
	table3rd->Rows->Add();
	table3rd->Rows->Add();
	table3rd->Rows->Add();
	table3rd->Rows[0]->Cells[0]->Value = "yi";
	table3rd->Rows[1]->Cells[0]->Value = "pi";
	table3rd->Rows[2]->Cells[0]->Value = "ni/n";
	for (int i = 1; i <= number_of_k; i++) {
		table3rd->Rows[0]->Cells[i]->Value = ys[i-1];
		table3rd->Rows[1]->Cells[i]->Value = p[i-1];
		table3rd->Rows[2]->Cells[i]->Value = (double(ns[i-1]) / n);
	}
	//table3rd->CurrentCell->Selected = false;
	table2nd->CurrentCell->Selected = false;
	double maxDiff = 0, diff = 0;
	for (int i = 0; i < number_of_k; i++) {
		diff = abs(p[i] - double(ns[i]) / n);
		if (diff > maxDiff) {
			maxDiff = diff;
		}
	}
	pictureBox1->Visible = true;
	maxDiffer->Visible = true;
	maxDiffer->Text = Convert::ToString(maxDiff);

	double summ = 0.,summ1=0,D = 0;
	vector<double>toDrawY;
	vector<double>toDrawY2;
	toDrawY.push_back(summ);
	toDrawY.push_back(summ);

	toDrawY2.push_back(summ1);
	toDrawY2.push_back(summ1);

	for (int i = 0; i < number_of_k; i++) {
		summ += p[i];
		toDrawY.push_back(summ);
		toDrawY.push_back(summ);

		summ1 += double(ns[i]) / n;
		toDrawY2.push_back(summ1);
		toDrawY2.push_back(summ1);
		if (abs(summ - summ1) > D) {
			D = abs(summ - summ1);
		}
	}
	setD->Text = "D = " + Convert::ToString(D);
	setD->Visible = true;
	toDrawY.push_back(summ);
	toDrawY.push_back(summ); 

	toDrawY2.push_back(summ1);
	toDrawY2.push_back(summ1);


	// Создаем объект графики для PictureBox
	Graphics^ g = graphicTrue->CreateGraphics();
	g->Clear(System::Drawing::Color::White); // Очищаем PictureBox

	// Определяем область рисования
	int width = graphicTrue->Width;
	int height = graphicTrue->Height;

	// Определяем масштаб
	double scaleX = 0.1 / 4;  // Масштаб по оси X (для преобразования пикселей в единицы функции)
	double scaleY = 180;   // Масштаб по оси Y (для увеличения амплитуды)

	// Определяем диапазон X
	double xMin = -1;
	double xMax = number_of_k + 3;
	double step = 1.;  // Шаг по оси X

	for (double x = 50.; x < width; x += 1. / scaleX) g->DrawLine(Pens::Gray, x, 0, x, height); //grid
	for (double x = 50.; x >= 0; x -= 1. / scaleX) g->DrawLine(Pens::Gray, x, 0, x, height); //grid
	for (double x = height * 5. / 6; x < height; x += 1. * scaleY)  g->DrawLine(Pens::Gray, 0, x, width, x);
	for (double x = height * 5. / 6; x >= 0; x -= 1. * scaleY)  g->DrawLine(Pens::Gray, 0, x, width, x);

	// Рисуем оси
	Pen^ axisPen = gcnew Pen(Color::Black, 2);
	g->DrawLine(axisPen, 0, height * 5. / 6, width, height * 5. / 6); // Ось X
	g->DrawLine(axisPen, 50, 0, 50, height);  // Ось Y


	Pen^ graphPen = gcnew Pen(Color::Blue, 2);
	Pen^ graphPen1 = gcnew Pen(Color::Green, 2);
	double x = xMin;
	for (int i = 0; i < 2 * number_of_k + 4; i += 2)
	{
		// Преобразуем координаты функции в координаты экрана
		int screenX1 = (int)(50 + x / scaleX);
		int screenY1 = (int)(height * 5. / 6 - toDrawY[i] * scaleY);

		int screenX2 = (int)(50 + (x + step) / scaleX);
		int screenY2 = (int)(height * 5. / 6 - toDrawY[i + 1] * scaleY);

		// Рисуем линию между двумя точками
		g->DrawLine(graphPen, screenX1, screenY1, screenX2, screenY2);
		//g->DrawLine(graphPen,  screenX2, screenY2,screenX3, screenY3);
		x += step;
	}
	x = xMin;
	for (int i = 0; i < 2 * number_of_k + 4; i += 2)
	{
		// Преобразуем координаты функции в координаты экрана
		int screenX1 = (int)(50 + x / scaleX);
		int screenY1 = (int)(height * 5. / 6 - toDrawY2[i] * scaleY);

		int screenX2 = (int)(50 + (x + step) / scaleX);
		int screenY2 = (int)(height * 5. / 6 - toDrawY2[i + 1] * scaleY);

		// Рисуем линию между двумя точками
		g->DrawLine(graphPen1, screenX1, screenY1, screenX2, screenY2);
		x += step;
	}
}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	graphicTrue->Visible = false;
	//graphicExp->Visible = false;
	table2nd->Visible = false;
	table3rd->Visible = false;
	table1st->Visible = true;
	pictureBox1->Visible = false;
	maxDiffer->Visible = false;
	Fn->Visible = false;
	Fn2->Visible = false;
	setD->Visible = false;
	label1->Visible = false;
	label2->Visible = false;
	label1->Visible = true;
	label2->Visible = true;
	get_k->Visible = true;
	get_zs->Visible = true;
	tableQs->Visible = true;
	tableQs->Rows->Clear();
	tableQs->Columns->Clear();
	table1st->Visible = true;
	enter_a->Visible = true;
	get_a->Visible = true;
	pictureBlue->Visible = false;
	pictureGreen->Visible = false;

	table1st->Rows->Clear();
	table1st->Columns->Clear();

	int n = Convert::ToInt32(get_n->Text);
	int N = Convert::ToInt32(get_NN->Text);
	int M = Convert::ToInt32(get_M->Text);
	int r = Convert::ToInt32(get_r->Text);
	int low_brdr = max(0, r + M - N);
	int high_brdr = min(M, r);
	int number_of_k = high_brdr - low_brdr + 1;
	int kay = low_brdr;
	table1st->Columns->Add("a", " ");
	for (int i = 0; i < number_of_k; i++) {
		table1st->Columns->Add(Convert::ToString(i), "k" + Convert::ToString(i));
	}
	table1st->Rows->Add();
	table1st->Rows->Add();
	table1st->Rows->Add();
	table1st->Rows[0]->Cells[0]->Value = "ys";
	table1st->Rows[1]->Cells[0]->Value = "ns";
	table1st->Rows[2]->Cells[0]->Value = "ns / n";
	for (int i = 1; i <= number_of_k; i++) {
		table1st->Rows[0]->Cells[i]->Value = ys[i-1];
		table1st->Rows[1]->Cells[i]->Value = ns[i-1];
		table1st->Rows[2]->Cells[i]->Value = (double(ns[i-1]) / n);
	}
	table1st->CurrentCell->Selected = false;



	int k = Convert::ToInt32(get_k->Text);
	String^ str = get_zs->Text;
	str = Convert::ToString(str);
	cli::array<String^>^ Str = str->Split(' ');

	//один раз
	vector<double>zs;
	vector<double>qs(k);
	double a = Convert::ToDouble(get_a->Text);
	//много раз
	vector<int>nj(k);

	//once
	zs.push_back(-1);
	int itForZ = 0;
	for (int i = 0; i < k-1; i++) {
		zs.push_back(Convert::ToDouble(Str[i]));
	}
	zs.push_back(high_brdr + 1);
	for (int i = 0; i < size(zs) - 1; i++) {
		qs[i] = 0;
		nj[i] = 0;
	}


	for (int i = 0; i < n; i++) {
		if (itForZ + 1 == size(zs)) {
			break;
		}
		if (xs[i] >= zs[itForZ] && xs[i] < zs[itForZ + 1]) {
			nj[itForZ]++;
		}
		else if (xs[i] >= zs[itForZ + 1]) {
			itForZ++;
			i--;
		}
	}
	for (int i = 0; i < size(zs) - 1; i++) {
		kay = low_brdr;
		while (kay <= zs[i + 1] && kay <= high_brdr) {
			if (zs[i] <= kay && kay < zs[i + 1]) {
				qs[i] += p[kay - low_brdr];
			}
			kay++;
		}
	}
	for (int i = 0; i < k; i++) {
		tableQs->Columns->Add(Convert::ToString(i), "q" + Convert::ToString(i));
	}
	tableQs->Rows->Add();
	for (int i = 0; i < k; i++) {
		tableQs->Rows[0]->Cells[i]->Value = qs[i];
	}

	double R0 = 0.;
	for (int i = 0; i < k; i++) {//тут начала с 0
		R0 += pow((nj[i] - n * qs[i]), 2) / (n * qs[i]);
	}
	set_R0->Text = "R0 = " + Convert::ToString(R0);
	set_R0->Visible = true;

	double F_R0 = 0.;
	if (k == 1) {
		F_R0 = 1;
	}
	else {
		kay = low_brdr;
		int numb = 100000;
		for (int i = 0; i <= numb; i++) {
			F_R0 += funcForHi(R0 * double(i - 1) / numb, k - 1) + funcForHi(R0 * double(i) / (numb), k - 1);
			kay++;
		}
		F_R0 = F_R0 * R0 / (2 * numb);
	}
	takeornot->Visible = true;
	F_R00->Visible = true;
	F_R00->Text = "F0 = " + Convert::ToString(F_R0);
	if (F_R0 < a) {
		takeornot->Text = "Принимаем гипотезу";
	}
	else {
		takeornot->Text = "Не принимаем гипотезу";
	}




	vector<double>ff;
	int getted = 0, rejected = 0;
	for (int w = 0; w < 100; w++) {
		vector<int>xi = getXs(N, M, r, n);
		itForZ = 0;
		for (int i = 0; i < size(zs) - 1; i++) {
			qs[i] = 0;
			nj[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			if (itForZ + 1 == size(zs)) {
				break;
			}
			if (xi[i] >= zs[itForZ] && xi[i] < zs[itForZ + 1]) {
				nj[itForZ]++;
			}
			else if (xi[i] >= zs[itForZ + 1]) {
				itForZ++;
				i--;
			}
		}
		for (int i = 0; i < size(zs) - 1; i++) {
			kay = low_brdr;
			while (kay <= zs[i + 1] && kay <= high_brdr) {
				if (zs[i] <= kay && kay < zs[i + 1]) {
					qs[i] += p[kay - low_brdr];
				}
				kay++;
			}
		}
		double R0 = 0.;
		for (int i = 0; i < k; i++) {//тут начала с 0
			R0 += pow((nj[i] - n * qs[i]), 2) / (n * qs[i]);
		}

		double F_R0 = 0.;
		if (k == 1) {
			F_R0 = 1;
		}
		else {
			kay = low_brdr;
			for (int i = 1; i <= n; i++) {
				F_R0 += funcForHi(R0 * double(i - 1) / n, k - 1) + funcForHi(R0 * double(i) / (n), k - 1);
				kay++;
			}
			F_R0 = F_R0 * R0 / (2 * n);
		}
		ff.push_back(R0);
		if (F_R0 < 1 - a) {
			getted++;
		}
		else {
			rejected++;
		}
	}

		F0_is_eq_to->Text = "Проведено 100 проверок, из них " + Convert::ToString(getted)+" раз гипотеза принята и "+ Convert::ToString(rejected)+" раз отклонена";
		F0_is_eq_to->Visible = true;
		//takeornot->Visible = true;
		/*if (F_R0 < a) {
			takeornot->Text = "Принимаем гипотезу";
		}
		else {
			takeornot->Text = "Не принимаем гипотезу";
		}*/
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	int n = Convert::ToInt32(get_n->Text);
	int N = Convert::ToInt32(get_NN->Text);
	int M = Convert::ToInt32(get_M->Text);
	int r = Convert::ToInt32(get_r->Text);
	int low_brdr = max(0, r + M - N);
	int high_brdr = min(M, r);
	int number_of_k = high_brdr - low_brdr + 1;
	getTable1st(p, ns, ys, xs, N, M, r, n);
}
private: System::Void get_n_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		int n = Convert::ToInt32(get_n->Text);
		int N = Convert::ToInt32(get_NN->Text);
		int M = Convert::ToInt32(get_M->Text);
		int r = Convert::ToInt32(get_r->Text);
		int low_brdr = max(0, r + M - N);
		int high_brdr = min(M, r);
		int number_of_k = high_brdr - low_brdr + 1;
		getTable1st(p, ns, ys, xs, N, M, r, n);
	}
	catch (Exception^e) {
		;
	}
}
private: System::Void get_NN_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		int n = Convert::ToInt32(get_n->Text);
		int N = Convert::ToInt32(get_NN->Text);
		int M = Convert::ToInt32(get_M->Text);
		int r = Convert::ToInt32(get_r->Text);
		if (N>=M&&N>=r) {
			int low_brdr = max(0, r + M - N);
			int high_brdr = min(M, r);
			int number_of_k = high_brdr - low_brdr + 1;
			getTable1st(p, ns, ys, xs, N, M, r, n);
		}
	}
	catch (Exception^ e) {
		;
	}
}
private: System::Void get_M_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		int n = Convert::ToInt32(get_n->Text);
		int N = Convert::ToInt32(get_NN->Text);
		int M = Convert::ToInt32(get_M->Text);
		int r = Convert::ToInt32(get_r->Text);
		if (N >= M && N >= r) {
			int low_brdr = max(0, r + M - N);
			int high_brdr = min(M, r);
			int number_of_k = high_brdr - low_brdr + 1;
			getTable1st(p, ns, ys, xs, N, M, r, n);
		}
	}
	catch (Exception^ e) {
		;
	}
}
private: System::Void get_r_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		int n = Convert::ToInt32(get_n->Text);
		int N = Convert::ToInt32(get_NN->Text);
		int M = Convert::ToInt32(get_M->Text);
		int r = Convert::ToInt32(get_r->Text);
		if (N >= M && N >= r) {
			int low_brdr = max(0, r + M - N);
			int high_brdr = min(M, r);
			int number_of_k = high_brdr - low_brdr + 1;
			getTable1st(p, ns, ys, xs, N, M, r, n);
		}
	}
	catch (Exception^ e) {
		;
	}
}
};
}
