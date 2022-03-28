#pragma once

namespace MyGradingSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ClassSevenResultForm
	/// </summary>
	public ref class ClassSevenResultForm : public System::Windows::Forms::Form
	{
	public:
		ClassSevenResultForm(void)
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
		~ClassSevenResultForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Firstname";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(0, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Surname";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(0, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Class Code";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(0, 231);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(164, 33);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Total Score";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(0, 274);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 33);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Average";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(0, 320);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 33);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Ranking";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(-2, 369);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(753, 115);
			this->dataGridView1->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(157, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 40);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(152, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 40);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(152, 127);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 40);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(157, 179);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 40);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(157, 231);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 40);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(157, 277);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 40);
			this->textBox6->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(157, 323);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 40);
			this->textBox7->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(263, 18);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 33);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Kiswahili";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(263, 75);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 33);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Math";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(263, 134);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(111, 33);
			this->label10->TabIndex = 17;
			this->label10->Text = L"English";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(263, 186);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(76, 33);
			this->label11->TabIndex = 18;
			this->label11->Text = L"CRE";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(263, 238);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(119, 33);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Science";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(273, 284);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(177, 33);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Social Study";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(390, 18);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 40);
			this->textBox8->TabIndex = 21;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(390, 68);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 40);
			this->textBox9->TabIndex = 22;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(390, 127);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 40);
			this->textBox10->TabIndex = 23;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(390, 179);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 40);
			this->textBox11->TabIndex = 24;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(390, 231);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 40);
			this->textBox12->TabIndex = 25;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(450, 284);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(40, 40);
			this->textBox13->TabIndex = 26;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(496, 18);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(127, 40);
			this->textBox14->TabIndex = 27;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(629, 21);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(107, 33);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Search";
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(527, 75);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 288);
			this->groupBox1->TabIndex = 29;
			this->groupBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 491);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 41);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Add New";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(184, 487);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 41);
			this->button2->TabIndex = 31;
			this->button2->Text = L"Ranking";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(340, 487);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 43);
			this->button3->TabIndex = 32;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(495, 488);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 42);
			this->button4->TabIndex = 33;
			this->button4->Text = L"Reset";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(611, 490);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(140, 42);
			this->button5->TabIndex = 34;
			this->button5->Text = L"Refresh";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(390, 543);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 38);
			this->button6->TabIndex = 35;
			this->button6->Text = L"Delete";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(527, 543);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(113, 38);
			this->button7->TabIndex = 36;
			this->button7->Text = L"Clear";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(676, 543);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 38);
			this->button8->TabIndex = 37;
			this->button8->Text = L"Exit";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// ClassSevenResultForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(17, 33);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(805, 663);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(8);
			this->Name = L"ClassSevenResultForm";
			this->Text = L"ClassSevenResultForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
