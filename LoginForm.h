#pragma once
#include <Windows.h>
#include <string>
#include <vector>
#include <set>
#include <list>
#include <algorithm>
#include "MAINform.h"
#include "RegistrationForm.h"
#include "ForgotPassword.h"
#include "AdminMain.h"
#include <string>
#include <vector>
#include "AdminMain.h"
using namespace std;


namespace OAIPProject {

	using namespace System;
	using namespace System::Windows::Forms;
	using namespace Windows::Forms::Design;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Sql;
	using namespace System::Data::OleDb;
	using namespace System::Data::SQLite;
	using namespace System::Collections::Generic;
	using namespace System::Text;
	using namespace System::Linq;
	using namespace cli;
	using namespace Bunifu::Framework::UI;
	using namespace Guna::UI::WinForms;
	/// <summary>
	/// Сводка для LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ textBoxLOGIN;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ textBoxPASS;
	private: Guna::UI::WinForms::GunaLabel^ labelLOGin;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	private: Guna::UI::WinForms::GunaLinkLabel^ link_REGISTRATION;



	private: Bunifu::Framework::UI::BunifuImageButton^ imageButton_login;
	private: Guna::UI::WinForms::GunaLinkLabel^ link_FP;
	private: Bunifu::Framework::UI::BunifuImageButton^ imageButton_exit;
	private: Bunifu::Framework::UI::BunifuImageButton^ button_PassVisibility;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->textBoxLOGIN = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->textBoxPASS = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->labelLOGin = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->link_REGISTRATION = (gcnew Guna::UI::WinForms::GunaLinkLabel());
			this->imageButton_login = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->link_FP = (gcnew Guna::UI::WinForms::GunaLinkLabel());
			this->imageButton_exit = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->button_PassVisibility = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButton_login))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButton_exit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_PassVisibility))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxLOGIN
			// 
			this->textBoxLOGIN->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxLOGIN->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxLOGIN->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->textBoxLOGIN->HintForeColor = System::Drawing::Color::MediumTurquoise;
			this->textBoxLOGIN->HintText = L"";
			this->textBoxLOGIN->isPassword = false;
			this->textBoxLOGIN->LineFocusedColor = System::Drawing::Color::Aqua;
			this->textBoxLOGIN->LineIdleColor = System::Drawing::Color::MediumTurquoise;
			this->textBoxLOGIN->LineMouseHoverColor = System::Drawing::Color::MediumOrchid;
			this->textBoxLOGIN->LineThickness = 3;
			this->textBoxLOGIN->Location = System::Drawing::Point(63, 79);
			this->textBoxLOGIN->Margin = System::Windows::Forms::Padding(4);
			this->textBoxLOGIN->Name = L"textBoxLOGIN";
			this->textBoxLOGIN->Size = System::Drawing::Size(236, 36);
			this->textBoxLOGIN->TabIndex = 12;
			this->textBoxLOGIN->TabStop = false;
			this->textBoxLOGIN->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// textBoxPASS
			// 
			this->textBoxPASS->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->textBoxPASS->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxPASS->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPASS->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->textBoxPASS->HintForeColor = System::Drawing::Color::Aqua;
			this->textBoxPASS->HintText = L"";
			this->textBoxPASS->isPassword = false;
			this->textBoxPASS->LineFocusedColor = System::Drawing::Color::Aqua;
			this->textBoxPASS->LineIdleColor = System::Drawing::Color::MediumTurquoise;
			this->textBoxPASS->LineMouseHoverColor = System::Drawing::Color::MediumOrchid;
			this->textBoxPASS->LineThickness = 3;
			this->textBoxPASS->Location = System::Drawing::Point(63, 162);
			this->textBoxPASS->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPASS->Name = L"textBoxPASS";
			this->textBoxPASS->Size = System::Drawing::Size(236, 36);
			this->textBoxPASS->TabIndex = 13;
			this->textBoxPASS->TabStop = false;
			this->textBoxPASS->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// labelLOGin
			// 
			this->labelLOGin->AutoSize = true;
			this->labelLOGin->BackColor = System::Drawing::Color::Black;
			this->labelLOGin->Font = (gcnew System::Drawing::Font(L"Unispace", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLOGin->ForeColor = System::Drawing::Color::DeepPink;
			this->labelLOGin->Location = System::Drawing::Point(139, 50);
			this->labelLOGin->Name = L"labelLOGin";
			this->labelLOGin->Size = System::Drawing::Size(88, 29);
			this->labelLOGin->TabIndex = 14;
			this->labelLOGin->Text = L"LOGIN";
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->BackColor = System::Drawing::Color::Black;
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"Unispace", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel1->ForeColor = System::Drawing::Color::DeepPink;
			this->gunaLabel1->Location = System::Drawing::Point(115, 134);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(133, 29);
			this->gunaLabel1->TabIndex = 0;
			this->gunaLabel1->Text = L"PASSWORD";
			// 
			// link_REGISTRATION
			// 
			this->link_REGISTRATION->AutoSize = true;
			this->link_REGISTRATION->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->link_REGISTRATION->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->link_REGISTRATION->LinkColor = System::Drawing::Color::Aqua;
			this->link_REGISTRATION->Location = System::Drawing::Point(1, 270);
			this->link_REGISTRATION->Name = L"link_REGISTRATION";
			this->link_REGISTRATION->Size = System::Drawing::Size(129, 19);
			this->link_REGISTRATION->TabIndex = 16;
			this->link_REGISTRATION->TabStop = true;
			this->link_REGISTRATION->Text = L"REGISTRATION";
			this->link_REGISTRATION->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->link_REGISTRATION->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::link_REGISTRATION_LinkClicked);
			// 
			// imageButton_login
			// 
			this->imageButton_login->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->imageButton_login->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageButton_login.Image")));
			this->imageButton_login->ImageActive = nullptr;
			this->imageButton_login->Location = System::Drawing::Point(79, 205);
			this->imageButton_login->Name = L"imageButton_login";
			this->imageButton_login->Size = System::Drawing::Size(209, 46);
			this->imageButton_login->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageButton_login->TabIndex = 19;
			this->imageButton_login->TabStop = false;
			this->imageButton_login->Zoom = 15;
			this->imageButton_login->Click += gcnew System::EventHandler(this, &LoginForm::imageButton_login_Click);
			// 
			// link_FP
			// 
			this->link_FP->AutoSize = true;
			this->link_FP->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->link_FP->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->link_FP->LinkColor = System::Drawing::Color::Aqua;
			this->link_FP->Location = System::Drawing::Point(179, 270);
			this->link_FP->Name = L"link_FP";
			this->link_FP->Size = System::Drawing::Size(159, 19);
			this->link_FP->TabIndex = 20;
			this->link_FP->TabStop = true;
			this->link_FP->Text = L"FORGOT PASSWORD";
			this->link_FP->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->link_FP->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::link_FP_LinkClicked);
			// 
			// imageButton_exit
			// 
			this->imageButton_exit->BackColor = System::Drawing::Color::Red;
			this->imageButton_exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageButton_exit.Image")));
			this->imageButton_exit->ImageActive = nullptr;
			this->imageButton_exit->Location = System::Drawing::Point(316, 5);
			this->imageButton_exit->Name = L"imageButton_exit";
			this->imageButton_exit->Size = System::Drawing::Size(20, 20);
			this->imageButton_exit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageButton_exit->TabIndex = 21;
			this->imageButton_exit->TabStop = false;
			this->imageButton_exit->Zoom = 10;
			this->imageButton_exit->Click += gcnew System::EventHandler(this, &LoginForm::imageButton_exit_Click);
			// 
			// button_PassVisibility
			// 
			this->button_PassVisibility->BackColor = System::Drawing::Color::Black;
			this->button_PassVisibility->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_PassVisibility.Image")));
			this->button_PassVisibility->ImageActive = nullptr;
			this->button_PassVisibility->Location = System::Drawing::Point(306, 173);
			this->button_PassVisibility->Name = L"button_PassVisibility";
			this->button_PassVisibility->Size = System::Drawing::Size(25, 25);
			this->button_PassVisibility->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->button_PassVisibility->TabIndex = 22;
			this->button_PassVisibility->TabStop = false;
			this->button_PassVisibility->Zoom = 10;
			this->button_PassVisibility->Click += gcnew System::EventHandler(this, &LoginForm::button_PassVisibility_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(341, 291);
			this->Controls->Add(this->button_PassVisibility);
			this->Controls->Add(this->imageButton_exit);
			this->Controls->Add(this->link_FP);
			this->Controls->Add(this->imageButton_login);
			this->Controls->Add(this->link_REGISTRATION);
			this->Controls->Add(this->gunaLabel1);
			this->Controls->Add(this->labelLOGin);
			this->Controls->Add(this->textBoxPASS);
			this->Controls->Add(this->textBoxLOGIN);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LoginForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::LoginForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::LoginForm_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButton_login))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButton_exit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_PassVisibility))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) 
{
	
}
private: System::Void imageButton_login_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SQLiteConnection^ db = gcnew SQLiteConnection("Data Source=" + "DataBases\\OAiP.db");
	try
	{
		db->Open();
		try
		{
			SQLiteCommand^ cmd = db->CreateCommand();
			cmd->CommandText = "SELECT ID, PassedThemes FROM Users WHERE Login='" + textBoxLOGIN->Text + "' AND Password = '" + textBoxPASS->Text + "';";
			SQLiteDataReader^ reader = cmd->ExecuteReader();
			if (reader->HasRows)
			{
				int ID;
				String^ PassedThemesLine;
				List<String^> Passed;
				while (reader->Read())
				{
					ID = reader->GetInt32(0);
					PassedThemesLine = reader->GetString(1);
				}
				if (textBoxLOGIN->Text == "ADMIN" && textBoxPASS->Text == "123456")
				{
					this->Hide();
					OAIPProject::AdminMain^ FF = gcnew OAIPProject::AdminMain();
					FF->Show();
				}
				else
				{
					cli::array<String^>^ PassedThemeArr = PassedThemesLine->Split(',');
					Passed.AddRange(PassedThemeArr);
					List<int>^ PassedINT = gcnew List<int>();
					for (int i = 0; i < Passed.Count; i++)
					{
						PassedINT->Add(Convert::ToInt32(Passed[i]));
					}
					OAIPProject::MAINform^ f2 = gcnew OAIPProject::MAINform(ID, PassedINT);
					f2->Show();
					this->Hide();
				}
			}
			else
			{
				MessageBox::Show("Такого пользователя нет");
			}

		}
		catch (Exception^ e)
		{
			MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
		}

		db->Close();
	}
	finally
	{
		delete (IDisposable^)db;
	}
}
private: System::Void imageButton_exit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Application::Exit();
}
private: System::Void button_PassVisibility_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBoxPASS->isPassword)
	{
		IO::FileStream^ stream = gcnew IO::FileStream(IO::Directory::GetCurrentDirectory() + "\\Images\\eye_show.png", IO::FileMode::Open);
		button_PassVisibility->Image = Image::FromStream(stream);
		stream->Close();
		delete stream;
		textBoxPASS->isPassword = false;
	}
	else 
	{
		IO::FileStream^ stream = gcnew IO::FileStream(IO::Directory::GetCurrentDirectory() + "\\Images\\eye_hide.png", IO::FileMode::Open);
		button_PassVisibility->Image = Image::FromStream(stream);
		stream->Close();
		delete stream;
		textBoxPASS->isPassword = true;
	}
}
private: System::Void link_FP_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) 
{
	OAIPProject::ForgotPassword^ FPform = gcnew OAIPProject::ForgotPassword();
	this->Hide();
	FPform->ShowDialog();
	this->Show();
}
private: System::Void link_REGISTRATION_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) 
{
	OAIPProject::RegistrationForm^ REGform = gcnew OAIPProject::RegistrationForm();
	this->Hide();
	REGform->ShowDialog();
	this->Show();
}
private: Point^ lastPoint;
private: System::Void LoginForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		Left += e->X - lastPoint->X;
		Top += e->Y - lastPoint->Y;
	}
}
private: System::Void LoginForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	lastPoint = e->Location;
}
};
}
