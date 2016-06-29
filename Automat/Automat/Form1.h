#pragma once
#include <string>
#include <sstream>
#include <stdlib.h>
#include <math.h>
#include <cmath>

namespace Automat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;


	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;













	private: System::ComponentModel::IContainer^  components;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(657, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 77);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(741, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 74);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::MenuBar;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(657, 86);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(78, 72);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::MenuBar;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Location = System::Drawing::Point(741, 86);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(78, 72);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::MenuBar;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Location = System::Drawing::Point(657, 164);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(78, 71);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::MenuBar;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(741, 165);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(78, 70);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->progressBar1);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Location = System::Drawing::Point(53, 21);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(598, 393);
			this->panel1->TabIndex = 6;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label8);
			this->panel7->Location = System::Drawing::Point(125, 230);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(173, 27);
			this->panel7->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Font = (gcnew System::Drawing::Font(L"Stencil", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Lime;
			this->label8->Location = System::Drawing::Point(-1, 2);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 25);
			this->label8->TabIndex = 44;
			this->label8->Click += gcnew System::EventHandler(this, &Form1::label8_Click_1);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel5->Controls->Add(this->label23);
			this->panel5->Controls->Add(this->label22);
			this->panel5->Controls->Add(this->pictureBox10);
			this->panel5->Controls->Add(this->pictureBox9);
			this->panel5->Controls->Add(this->pictureBox8);
			this->panel5->Controls->Add(this->pictureBox7);
			this->panel5->Controls->Add(this->pictureBox6);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->pictureBox5);
			this->panel5->Controls->Add(this->textBox6);
			this->panel5->Controls->Add(this->textBox5);
			this->panel5->Controls->Add(this->textBox4);
			this->panel5->Controls->Add(this->textBox3);
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Location = System::Drawing::Point(14, 271);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(381, 119);
			this->panel5->TabIndex = 42;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel5_Paint);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label23->Location = System::Drawing::Point(232, 14);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(16, 13);
			this->label23->TabIndex = 40;
			this->label23->Text = L"z³";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label22->Location = System::Drawing::Point(198, 14);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(28, 13);
			this->label22->TabIndex = 23;
			this->label22->Text = L".......";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(3, 32);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(49, 45);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 39;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(68, 32);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(49, 45);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 38;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(130, 32);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(49, 45);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 37;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(192, 32);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(49, 45);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 36;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(254, 32);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(49, 45);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 35;
			this->pictureBox6->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Impact", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(128, 8);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 22);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Reszta: ";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(318, 32);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(49, 45);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 34;
			this->pictureBox5->TabStop = false;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(3, 83);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(49, 20);
			this->textBox6->TabIndex = 33;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(68, 83);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(49, 20);
			this->textBox5->TabIndex = 32;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(130, 83);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 20);
			this->textBox4->TabIndex = 31;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(192, 83);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(49, 20);
			this->textBox3->TabIndex = 30;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(256, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(47, 20);
			this->textBox2->TabIndex = 29;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(318, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(55, 20);
			this->textBox1->TabIndex = 28;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Controls->Add(this->pictureBox1);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Location = System::Drawing::Point(19, 19);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(390, 182);
			this->panel4->TabIndex = 41;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label18->Location = System::Drawing::Point(326, 153);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(25, 13);
			this->label18->TabIndex = 20;
			this->label18->Text = L"450";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label19->Location = System::Drawing::Point(291, 153);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(31, 13);
			this->label19->TabIndex = 19;
			this->label19->Text = L"Kod:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label16->Location = System::Drawing::Point(232, 153);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(25, 13);
			this->label16->TabIndex = 18;
			this->label16->Text = L"399";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label17->Location = System::Drawing::Point(197, 153);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(31, 13);
			this->label17->TabIndex = 17;
			this->label17->Text = L"Kod:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label14->Location = System::Drawing::Point(138, 153);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(25, 13);
			this->label14->TabIndex = 16;
			this->label14->Text = L"242";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label15->Location = System::Drawing::Point(103, 153);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(31, 13);
			this->label15->TabIndex = 15;
			this->label15->Text = L"Kod:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label13->Location = System::Drawing::Point(38, 153);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(25, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"131";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(3, 153);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 13);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Kod:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(197, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Fanta: 1.80 z³";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(103, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Pepsi: 2.30 z³";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(3, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Cola: 2.50 z³";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(200, 13);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(70, 119);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(106, 13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(69, 119);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(67, 119);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(294, 13);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(70, 119);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(290, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Sprite: 3.10 z³";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel3->Controls->Add(this->label25);
			this->panel3->Controls->Add(this->label24);
			this->panel3->Controls->Add(this->label21);
			this->panel3->Controls->Add(this->label20);
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Controls->Add(this->button19);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(418, 8);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(167, 310);
			this->panel3->TabIndex = 40;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel3_Paint);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label25->Location = System::Drawing::Point(135, 230);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(16, 13);
			this->label25->TabIndex = 42;
			this->label25->Text = L"z³";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label24->Location = System::Drawing::Point(135, 254);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(16, 13);
			this->label24->TabIndex = 41;
			this->label24->Text = L"z³";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Impact", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label21->Location = System::Drawing::Point(6, 248);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(90, 22);
			this->label21->TabIndex = 22;
			this->label21->Text = L"Stan konta:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label20->Location = System::Drawing::Point(101, 230);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(28, 13);
			this->label20->TabIndex = 21;
			this->label20->Text = L".......";
			this->label20->Click += gcnew System::EventHandler(this, &Form1::label20_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panel2->Controls->Add(this->maskedTextBox1);
			this->panel2->Controls->Add(this->button18);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->button17);
			this->panel2->Controls->Add(this->button16);
			this->panel2->Controls->Add(this->button15);
			this->panel2->Controls->Add(this->button14);
			this->panel2->Controls->Add(this->button13);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Location = System::Drawing::Point(12, 5);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(148, 211);
			this->panel2->TabIndex = 12;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(84, 15);
			this->maskedTextBox1->Mask = L"000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(27, 20);
			this->maskedTextBox1->TabIndex = 24;
			this->maskedTextBox1->Text = L"000";
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(26, 177);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(91, 31);
			this->button18->TabIndex = 15;
			this->button18->Text = L"Wybierz";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label11->Location = System::Drawing::Point(81, 38);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 14;
			this->label11->Text = L".........";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Black", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(17, 35);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 19);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Napój:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Black", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(17, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 19);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Kod:";
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(57, 150);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(60, 26);
			this->button17->TabIndex = 10;
			this->button17->Text = L"Cofnij";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(26, 150);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(27, 26);
			this->button16->TabIndex = 9;
			this->button16->Text = L"0";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(90, 118);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(27, 26);
			this->button15->TabIndex = 8;
			this->button15->Text = L"9";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(57, 118);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(27, 26);
			this->button14->TabIndex = 7;
			this->button14->Text = L"8";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(26, 118);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(27, 26);
			this->button13->TabIndex = 6;
			this->button13->Text = L"7";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(90, 86);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(27, 26);
			this->button12->TabIndex = 5;
			this->button12->Text = L"6";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(57, 86);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(27, 26);
			this->button11->TabIndex = 4;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(26, 86);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(27, 26);
			this->button10->TabIndex = 3;
			this->button10->Text = L"4";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(90, 54);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(27, 26);
			this->button9->TabIndex = 2;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(57, 54);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(27, 26);
			this->button8->TabIndex = 1;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(26, 54);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(27, 26);
			this->button7->TabIndex = 0;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(33, 271);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(90, 36);
			this->button19->TabIndex = 24;
			this->button19->Text = L"Zap³aæ";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Impact", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(8, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 22);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Nale¿noœæ:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(101, 254);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L".......";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(115, 201);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(193, 23);
			this->progressBar1->TabIndex = 27;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel6->Location = System::Drawing::Point(14, 8);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(398, 196);
			this->panel6->TabIndex = 43;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(696, 338);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(93, 42);
			this->button20->TabIndex = 7;
			this->button20->Text = L"WyjdŸ";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(823, 426);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->panel1->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}

double suma;

#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			suma = suma + 5.00;
			label1 -> Text = suma.ToString("0.00");
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			suma = suma + 2.00;
			label1 -> Text = suma.ToString("0.00");
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			suma = suma + 1.00;
			label1 -> Text = suma.ToString("0.00");
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			suma = suma + 0.50;
			label1 -> Text = suma.ToString("0.00");
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			suma = suma + 0.20;
			label1 -> Text = suma.ToString("0.00");
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			suma = suma + 0.10;
			label1 -> Text = suma.ToString("0.00");
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

		 if(maskedTextBox1 -> Text == "000") {
			 maskedTextBox1 -> Text = "1";
		 }
		 else {
			 maskedTextBox1 -> Text = Convert::ToInt32(maskedTextBox1 -> Text) + "1";
		 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		if(maskedTextBox1 -> Text == "000") {
			 maskedTextBox1 -> Text = "2";
		 }
		 else {
			 maskedTextBox1 -> Text = Convert::ToInt32(maskedTextBox1 -> Text) + "2";
		 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(maskedTextBox1 -> Text == "000") {
			 maskedTextBox1 -> Text = "3";
		 }
		 else {
			 maskedTextBox1 -> Text = Convert::ToInt32(maskedTextBox1 -> Text) + "3";
		 }
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		if(maskedTextBox1 -> Text == "000") {
			 maskedTextBox1 -> Text = "4";
		 }
		 else {
			 maskedTextBox1 -> Text = Convert::ToInt32(maskedTextBox1 -> Text) + "4";
		 }
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(maskedTextBox1 -> Text == "000") {
			 maskedTextBox1 -> Text = "5";
		 }
		 else {
			 maskedTextBox1 -> Text = Convert::ToInt32(maskedTextBox1 -> Text) + "5";
		 }
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(maskedTextBox1 -> Text == "000") {
			 maskedTextBox1 -> Text = "6";
		 }
		 else {
			 maskedTextBox1 -> Text = Convert::ToInt32(maskedTextBox1 -> Text) + "6";
		 }
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(maskedTextBox1 -> Text == "000") {
			 maskedTextBox1 -> Text = "7";
		 }
		 else {
			 maskedTextBox1 -> Text = Convert::ToInt32(maskedTextBox1 -> Text) + "7";
		 }
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(maskedTextBox1 -> Text == "000") {
			 maskedTextBox1 -> Text = "8";
		 }
		 else {
			 maskedTextBox1 -> Text = Convert::ToInt32(maskedTextBox1 -> Text) + "8";
		 }
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(maskedTextBox1 -> Text == "000") {
			 maskedTextBox1 -> Text = "9";
		 }
		 else {
			 maskedTextBox1 -> Text = Convert::ToInt32(maskedTextBox1 -> Text) + "9";
		 }
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(maskedTextBox1 -> Text == "000") {
			 maskedTextBox1 -> Text = "0";
		 }
		 else {
			 maskedTextBox1 -> Text = Convert::ToInt32(maskedTextBox1 -> Text) + "0";
		 }
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		 maskedTextBox1 -> Text = "   ";
		 maskedTextBox1 -> Text = "000";
		 label11 -> Text = "......";
		 label20 -> Text = "......";
		 label1 -> Text = "......";
		 label22 -> Text = "......";
		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 double a = 2.50;
			 double b = 2.30;
			 double c = 1.80;
			 double d = 3.10;

			 if (maskedTextBox1 -> Text == "131") 
			 {
				 label11 -> Text = "Cola"; 
				 label20 -> Text = a.ToString("0.00");
			 }
			 if (maskedTextBox1 -> Text == "242") 
			 {
				  label11 -> Text = "Pepsi";
				  label20 -> Text = b.ToString("0.00");
			 }		
			 if (maskedTextBox1 -> Text == "399") {
				 label11 -> Text = "Fanta";
				 label20 -> Text = c.ToString("0.00");
			 }
			 if (maskedTextBox1 -> Text == "450") {
				 label11 -> Text = "Sprite";
				 label20 -> Text = d.ToString("0.00");
			 }
			
			 if (maskedTextBox1 -> Text != "131" && maskedTextBox1 -> Text != "242" && maskedTextBox1 -> Text != "399" && maskedTextBox1 -> Text != "450") 
			 {
				 maskedTextBox1 -> Text = "000";
				 label11 -> Text = "Z³y kod";
				 label20 -> Text = "0";
			 }
		 }
private: System::Void maskedTextBox1_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {

			double naleznosc;
			double reszta;
	
			naleznosc = System::Convert::ToDouble(label20 -> Text);
			
			reszta = suma - naleznosc;

			if (suma >= naleznosc){ 
			label22 -> Text = reszta.ToString("0.00");
			this->timer1->Start();
			}
			else{
			label22 -> Text = "Dop³aæ";
			}

			double N[] = {5, 2, 1, 0.50, 0.20, 0.10}; //tablica dostepnych nominalow
			int i;
			int P;

			i = 0;
			      
			while (reszta>0) //dopoki nie wydano calej reszty
			{
				if (reszta >= N[i])  //sprawdz czy mozna wydac danym nominalem
				{
					P = (int)(reszta / N[i]);   //ile razy wydac dany nominal
					reszta = Math::Round(reszta - N[i] * P, 2); //zmniejsz reszte o wydany nominal
					textBox1 -> Text = " x " +P;
				}
				i++;            //rozpatrz kolejny nominal
				
				if (reszta >= N[i])  //sprawdz czy mozna wydac danym nominalem
				{
					P = (int)(reszta / N[i]);   //ile razy wydac dany nominal
					reszta = Math::Round(reszta - N[i] * P, 2); //zmniejsz reszte o wydany nominal
					textBox2 -> Text = " x " +P;
				}
				i++;            //rozpatrz kolejny nominal

				if (reszta >= N[i])  //sprawdz czy mozna wydac danym nominalem
				{
					P = (int)(reszta / N[i]);   //ile razy wydac dany nominal
					reszta = Math::Round(reszta - N[i] * P, 2); //zmniejsz reszte o wydany nominal
					textBox3 -> Text = " x " +P;
				}
				i++;            //rozpatrz kolejny nominal

								if (reszta >= N[i])  //sprawdz czy mozna wydac danym nominalem
				{
					P = (int)(reszta / N[i]);   //ile razy wydac dany nominal
					reszta = Math::Round(reszta - N[i] * P, 2); //zmniejsz reszte o wydany nominal
					textBox4 -> Text = " x " +P;
				}
				i++;            //rozpatrz kolejny nominal

				if (reszta >= N[i])  //sprawdz czy mozna wydac danym nominalem
				{
					P = (int)(reszta / N[i]);   //ile razy wydac dany nominal
					reszta = Math::Round(reszta - N[i] * P, 2); //zmniejsz reszte o wydany nominal
					textBox5 -> Text = " x " +P;
				}
				i++;            //rozpatrz kolejny nominal

				if (reszta >= N[i])  //sprawdz czy mozna wydac danym nominalem
				{
					P = (int)(reszta / N[i]);   //ile razy wydac dany nominal
					reszta = Math::Round(reszta - N[i] * P, 2); //zmniejsz reszte o wydany nominal
					textBox6 -> Text = " x " +P;
				}

			}
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		if(progressBar1->Value <=99){
			this->progressBar1->Value++;
		}
		else
		{
			this->timer1->Stop();
			label8 -> Text = "Podano napój";
		}
		
	}
private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void maskedTextBox2_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
		 }
private: System::Void maskedTextBox2_MaskInputRejected_1(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
		 }
private: System::Void panel5_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void label8_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button21_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		 }
private: System::Void button21_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

