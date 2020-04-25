#pragma once
#include "MAINform.h"
#include "Testing.h"
#include "Themes.h"
#include <Windows.h>
#include <string>

namespace OAIPProject 
{
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace Windows::Forms::Design;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;
	using namespace System::Collections::Generic;
	using namespace System::Text;
	using namespace System::Linq;
	using namespace cli;
	using namespace std;

	/// <summary>
	/// —водка дл€ TEST
	/// </summary>
	public ref class TEST : public System::Windows::Forms::Form
	{
	private:
		String^ RightAns;
		int IDuser;
		String^ strRIGHTANSers;
	private: Bunifu::Framework::UI::BunifuImageButton^ imageButton_exit;
		   int TESTid;
	public:
		TEST(Themes^ OBJ, Testing^ OBJ2, int IND, int IDofUSER)
		{
			InitializeComponent();
			this->strRIGHTANSers = strRIGHTANSers;
			TESTid = IND;
			IDuser = IDofUSER;
			labelTHEME->Text += OBJ->GetName();
			richTextBoxTEST_TEXT->Text = OBJ2->GetQUEST();
			xuiRadioQ_1->Text = OBJ2->GetQuestion_1();
			xuiRadioQ_2->Text = OBJ2->GetQuestion_2();
			xuiRadioQ_3->Text = OBJ2->GetQuestion_3();
			RightAns = OBJ2->GetRightAnswer();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~TEST()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelTHEME;
	protected:

	private: System::Windows::Forms::RichTextBox^ richTextBoxTEST_TEXT;
	protected:


	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButtonQUESTION;

	private: XanderUI::XUIRadio^ xuiRadioQ_1;
	private: XanderUI::XUIRadio^ xuiRadioQ_2;
	private: XanderUI::XUIRadio^ xuiRadioQ_3;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TEST::typeid));
			this->labelTHEME = (gcnew System::Windows::Forms::Label());
			this->richTextBoxTEST_TEXT = (gcnew System::Windows::Forms::RichTextBox());
			this->bunifuImageButtonQUESTION = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->xuiRadioQ_1 = (gcnew XanderUI::XUIRadio());
			this->xuiRadioQ_2 = (gcnew XanderUI::XUIRadio());
			this->xuiRadioQ_3 = (gcnew XanderUI::XUIRadio());
			this->imageButton_exit = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButtonQUESTION))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButton_exit))->BeginInit();
			this->SuspendLayout();
			// 
			// labelTHEME
			// 
			this->labelTHEME->AutoSize = true;
			this->labelTHEME->Location = System::Drawing::Point(69, 30);
			this->labelTHEME->Name = L"labelTHEME";
			this->labelTHEME->Size = System::Drawing::Size(43, 13);
			this->labelTHEME->TabIndex = 0;
			this->labelTHEME->Text = L"“≈ћј: ";
			// 
			// richTextBoxTEST_TEXT
			// 
			this->richTextBoxTEST_TEXT->Location = System::Drawing::Point(4, 80);
			this->richTextBoxTEST_TEXT->Name = L"richTextBoxTEST_TEXT";
			this->richTextBoxTEST_TEXT->Size = System::Drawing::Size(539, 70);
			this->richTextBoxTEST_TEXT->TabIndex = 1;
			this->richTextBoxTEST_TEXT->Text = L"";
			// 
			// bunifuImageButtonQUESTION
			// 
			this->bunifuImageButtonQUESTION->BackColor = System::Drawing::Color::SeaGreen;
			this->bunifuImageButtonQUESTION->Enabled = false;
			this->bunifuImageButtonQUESTION->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButtonQUESTION.Image")));
			this->bunifuImageButtonQUESTION->ImageActive = nullptr;
			this->bunifuImageButtonQUESTION->Location = System::Drawing::Point(153, 255);
			this->bunifuImageButtonQUESTION->Name = L"bunifuImageButtonQUESTION";
			this->bunifuImageButtonQUESTION->Size = System::Drawing::Size(245, 47);
			this->bunifuImageButtonQUESTION->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButtonQUESTION->TabIndex = 3;
			this->bunifuImageButtonQUESTION->TabStop = false;
			this->bunifuImageButtonQUESTION->Zoom = 10;
			this->bunifuImageButtonQUESTION->Click += gcnew System::EventHandler(this, &TEST::bunifuImageButtonQUESTION_Click);
			// 
			// xuiRadioQ_1
			// 
			this->xuiRadioQ_1->Checked = false;
			this->xuiRadioQ_1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xuiRadioQ_1->ForeColor = System::Drawing::Color::Black;
			this->xuiRadioQ_1->Location = System::Drawing::Point(12, 157);
			this->xuiRadioQ_1->Name = L"xuiRadioQ_1";
			this->xuiRadioQ_1->RadioColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->xuiRadioQ_1->RadioHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->xuiRadioQ_1->RadioStyle = XanderUI::XUIRadio::Style::Material;
			this->xuiRadioQ_1->Size = System::Drawing::Size(531, 16);
			this->xuiRadioQ_1->TabIndex = 4;
			this->xuiRadioQ_1->Text = L"xuiRadio1";
			this->xuiRadioQ_1->Click += gcnew System::EventHandler(this, &TEST::xuiRadioQ_Click);
			// 
			// xuiRadioQ_2
			// 
			this->xuiRadioQ_2->Checked = false;
			this->xuiRadioQ_2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xuiRadioQ_2->ForeColor = System::Drawing::Color::Black;
			this->xuiRadioQ_2->Location = System::Drawing::Point(12, 188);
			this->xuiRadioQ_2->Name = L"xuiRadioQ_2";
			this->xuiRadioQ_2->RadioColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->xuiRadioQ_2->RadioHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->xuiRadioQ_2->RadioStyle = XanderUI::XUIRadio::Style::Material;
			this->xuiRadioQ_2->Size = System::Drawing::Size(531, 16);
			this->xuiRadioQ_2->TabIndex = 5;
			this->xuiRadioQ_2->Text = L"xuiRadio2";
			this->xuiRadioQ_2->Click += gcnew System::EventHandler(this, &TEST::xuiRadioQ_Click);
			// 
			// xuiRadioQ_3
			// 
			this->xuiRadioQ_3->Checked = false;
			this->xuiRadioQ_3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xuiRadioQ_3->ForeColor = System::Drawing::Color::Black;
			this->xuiRadioQ_3->Location = System::Drawing::Point(12, 219);
			this->xuiRadioQ_3->Name = L"xuiRadioQ_3";
			this->xuiRadioQ_3->RadioColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->xuiRadioQ_3->RadioHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->xuiRadioQ_3->RadioStyle = XanderUI::XUIRadio::Style::Material;
			this->xuiRadioQ_3->Size = System::Drawing::Size(531, 16);
			this->xuiRadioQ_3->TabIndex = 6;
			this->xuiRadioQ_3->Text = L"xuiRadio3";
			this->xuiRadioQ_3->Click += gcnew System::EventHandler(this, &TEST::xuiRadioQ_Click);
			// 
			// imageButton_exit
			// 
			this->imageButton_exit->BackColor = System::Drawing::Color::Crimson;
			this->imageButton_exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageButton_exit.Image")));
			this->imageButton_exit->ImageActive = nullptr;
			this->imageButton_exit->Location = System::Drawing::Point(519, 2);
			this->imageButton_exit->Name = L"imageButton_exit";
			this->imageButton_exit->Size = System::Drawing::Size(24, 24);
			this->imageButton_exit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageButton_exit->TabIndex = 23;
			this->imageButton_exit->TabStop = false;
			this->imageButton_exit->Zoom = 10;
			this->imageButton_exit->Click += gcnew System::EventHandler(this, &TEST::imageButton_exit_Click);
			// 
			// TEST
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(545, 314);
			this->ControlBox = false;
			this->Controls->Add(this->imageButton_exit);
			this->Controls->Add(this->xuiRadioQ_3);
			this->Controls->Add(this->xuiRadioQ_2);
			this->Controls->Add(this->xuiRadioQ_1);
			this->Controls->Add(this->bunifuImageButtonQUESTION);
			this->Controls->Add(this->richTextBoxTEST_TEXT);
			this->Controls->Add(this->labelTHEME);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"TEST";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"TEST";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButtonQUESTION))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButton_exit))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void xuiRadioQ_Click(System::Object^ sender, System::EventArgs^ e) 
{
	bunifuImageButtonQUESTION->Enabled = true;
}
private: System::Void bunifuImageButtonQUESTION_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (xuiRadioQ_1->Checked)
	{
		if (xuiRadioQ_1->Text == RightAns)
		{
			MessageBox::Show("YES");			
			fillDataBaseWithTheCorrectAns();		
		}
		else
		{
			MessageBox::Show("NO");
		}
	}
	else if (xuiRadioQ_2->Checked)
	{
		if (xuiRadioQ_2->Text == RightAns)
		{
			MessageBox::Show("YES");
		}
		else
		{
			MessageBox::Show("NO");
		}
	}
	else if (xuiRadioQ_3->Checked)
	{
		if (xuiRadioQ_3->Text == RightAns)
		{
			MessageBox::Show("YES");
		}
		else
		{
			MessageBox::Show("NO");
		}
	}
}
private: System::Void imageButton_exit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}

private: Void fillDataBaseWithTheCorrectAns()
{
	SQLiteConnection^ con = gcnew SQLiteConnection("Data Source=DataBases\\OAiP.db");
	try 
	{
		con->Open();
		SQLiteCommand^ cmd = con->CreateCommand();
		cmd->CommandText = "SELECT PassedThemes FROM Users WHERE ID=" + IDuser;
		strRIGHTANSers = cmd->ExecuteScalar()->ToString();
		delete cmd;
		strRIGHTANSers += "," + ++TESTid;
		SQLiteCommand^ cmd2 = con->CreateCommand();
		cmd2->CommandText = "UPDATE Users SET PassedThemes=" + "'" + strRIGHTANSers + "' WHERE ID=" + IDuser +";";
		cmd2->ExecuteNonQuery();
		delete cmd2;
		con->Close();

		TEST::Close();
		cli::array<String^>^ PassedThemeArr = strRIGHTANSers->Split(',');
		//TODO: make it rain
		//MAINform^ lol = gcnew MAINform(IDuser, PassedThemeArr);
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
	finally
	{
		delete con;
	}
}
};
}