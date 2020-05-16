#pragma once

namespace OAIPProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;
	using namespace System::IO;

	/// <summary>
	/// Сводка для RegistrationForm
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ textBox_RegLogin;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ textBox_pass;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ textBox_repPass;


	private: Bunifu::Framework::UI::BunifuImageButton^ button_applyUser;

	private: Bunifu::Framework::UI::BunifuImageButton^ button_PassVisibility;
	private: System::Windows::Forms::Label^ label_login;

	private: System::Windows::Forms::Label^ label_pass;

	private: System::Windows::Forms::Label^ labelRep_pass;
	private: Bunifu::Framework::UI::BunifuImageButton^ imageButton_exit;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegistrationForm::typeid));
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->textBox_RegLogin = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->textBox_pass = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->textBox_repPass = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->button_applyUser = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->button_PassVisibility = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label_login = (gcnew System::Windows::Forms::Label());
			this->label_pass = (gcnew System::Windows::Forms::Label());
			this->labelRep_pass = (gcnew System::Windows::Forms::Label());
			this->imageButton_exit = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_applyUser))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_PassVisibility))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButton_exit))->BeginInit();
			this->SuspendLayout();
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"Unispace", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel1->ForeColor = System::Drawing::Color::SpringGreen;
			this->gunaLabel1->Location = System::Drawing::Point(88, 9);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(231, 35);
			this->gunaLabel1->TabIndex = 0;
			this->gunaLabel1->Text = L"REGISTRATION";
			// 
			// textBox_RegLogin
			// 
			this->textBox_RegLogin->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_RegLogin->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_RegLogin->ForeColor = System::Drawing::Color::Aqua;
			this->textBox_RegLogin->HintForeColor = System::Drawing::Color::SpringGreen;
			this->textBox_RegLogin->HintText = L"";
			this->textBox_RegLogin->isPassword = false;
			this->textBox_RegLogin->LineFocusedColor = System::Drawing::Color::BlueViolet;
			this->textBox_RegLogin->LineIdleColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_RegLogin->LineMouseHoverColor = System::Drawing::Color::Turquoise;
			this->textBox_RegLogin->LineThickness = 3;
			this->textBox_RegLogin->Location = System::Drawing::Point(39, 78);
			this->textBox_RegLogin->Margin = System::Windows::Forms::Padding(4);
			this->textBox_RegLogin->Name = L"textBox_RegLogin";
			this->textBox_RegLogin->Size = System::Drawing::Size(304, 25);
			this->textBox_RegLogin->TabIndex = 1;
			this->textBox_RegLogin->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// textBox_pass
			// 
			this->textBox_pass->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_pass->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_pass->ForeColor = System::Drawing::Color::Fuchsia;
			this->textBox_pass->HintForeColor = System::Drawing::Color::Crimson;
			this->textBox_pass->HintText = L"";
			this->textBox_pass->isPassword = false;
			this->textBox_pass->LineFocusedColor = System::Drawing::Color::BlueViolet;
			this->textBox_pass->LineIdleColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_pass->LineMouseHoverColor = System::Drawing::Color::Turquoise;
			this->textBox_pass->LineThickness = 3;
			this->textBox_pass->Location = System::Drawing::Point(39, 130);
			this->textBox_pass->Margin = System::Windows::Forms::Padding(4);
			this->textBox_pass->Name = L"textBox_pass";
			this->textBox_pass->Size = System::Drawing::Size(304, 25);
			this->textBox_pass->TabIndex = 2;
			this->textBox_pass->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// textBox_repPass
			// 
			this->textBox_repPass->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_repPass->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_repPass->ForeColor = System::Drawing::Color::Fuchsia;
			this->textBox_repPass->HintForeColor = System::Drawing::Color::Crimson;
			this->textBox_repPass->HintText = L"";
			this->textBox_repPass->isPassword = false;
			this->textBox_repPass->LineFocusedColor = System::Drawing::Color::BlueViolet;
			this->textBox_repPass->LineIdleColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_repPass->LineMouseHoverColor = System::Drawing::Color::Turquoise;
			this->textBox_repPass->LineThickness = 3;
			this->textBox_repPass->Location = System::Drawing::Point(39, 185);
			this->textBox_repPass->Margin = System::Windows::Forms::Padding(4);
			this->textBox_repPass->Name = L"textBox_repPass";
			this->textBox_repPass->Size = System::Drawing::Size(304, 25);
			this->textBox_repPass->TabIndex = 3;
			this->textBox_repPass->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// button_applyUser
			// 
			this->button_applyUser->BackColor = System::Drawing::Color::SeaGreen;
			this->button_applyUser->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_applyUser.Image")));
			this->button_applyUser->ImageActive = nullptr;
			this->button_applyUser->Location = System::Drawing::Point(39, 232);
			this->button_applyUser->Name = L"button_applyUser";
			this->button_applyUser->Size = System::Drawing::Size(304, 40);
			this->button_applyUser->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->button_applyUser->TabIndex = 4;
			this->button_applyUser->TabStop = false;
			this->button_applyUser->Zoom = 10;
			this->button_applyUser->Click += gcnew System::EventHandler(this, &RegistrationForm::button_applyUser_Click);
			// 
			// button_PassVisibility
			// 
			this->button_PassVisibility->BackColor = System::Drawing::Color::Black;
			this->button_PassVisibility->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_PassVisibility->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_PassVisibility.Image")));
			this->button_PassVisibility->ImageActive = nullptr;
			this->button_PassVisibility->Location = System::Drawing::Point(348, 130);
			this->button_PassVisibility->Name = L"button_PassVisibility";
			this->button_PassVisibility->Size = System::Drawing::Size(25, 25);
			this->button_PassVisibility->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->button_PassVisibility->TabIndex = 23;
			this->button_PassVisibility->TabStop = false;
			this->button_PassVisibility->Zoom = 10;
			this->button_PassVisibility->Click += gcnew System::EventHandler(this, &RegistrationForm::button_PassVisibility_Click);
			// 
			// label_login
			// 
			this->label_login->AutoSize = true;
			this->label_login->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_login->ForeColor = System::Drawing::Color::Aqua;
			this->label_login->Location = System::Drawing::Point(175, 56);
			this->label_login->Name = L"label_login";
			this->label_login->Size = System::Drawing::Size(59, 19);
			this->label_login->TabIndex = 24;
			this->label_login->Text = L"LOGIN";
			// 
			// label_pass
			// 
			this->label_pass->AutoSize = true;
			this->label_pass->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_pass->ForeColor = System::Drawing::Color::Aqua;
			this->label_pass->Location = System::Drawing::Point(156, 110);
			this->label_pass->Name = L"label_pass";
			this->label_pass->Size = System::Drawing::Size(89, 19);
			this->label_pass->TabIndex = 25;
			this->label_pass->Text = L"PASSWORD";
			// 
			// labelRep_pass
			// 
			this->labelRep_pass->AutoSize = true;
			this->labelRep_pass->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRep_pass->ForeColor = System::Drawing::Color::Aqua;
			this->labelRep_pass->Location = System::Drawing::Point(121, 164);
			this->labelRep_pass->Name = L"labelRep_pass";
			this->labelRep_pass->Size = System::Drawing::Size(159, 19);
			this->labelRep_pass->TabIndex = 26;
			this->labelRep_pass->Text = L"REPEAT PASSWORD";
			// 
			// imageButton_exit
			// 
			this->imageButton_exit->BackColor = System::Drawing::Color::Red;
			this->imageButton_exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageButton_exit.Image")));
			this->imageButton_exit->ImageActive = nullptr;
			this->imageButton_exit->Location = System::Drawing::Point(360, 2);
			this->imageButton_exit->Name = L"imageButton_exit";
			this->imageButton_exit->Size = System::Drawing::Size(20, 20);
			this->imageButton_exit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageButton_exit->TabIndex = 27;
			this->imageButton_exit->TabStop = false;
			this->imageButton_exit->Zoom = 10;
			this->imageButton_exit->Click += gcnew System::EventHandler(this, &RegistrationForm::imageButton_exit_Click);
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(383, 292);
			this->Controls->Add(this->imageButton_exit);
			this->Controls->Add(this->labelRep_pass);
			this->Controls->Add(this->label_pass);
			this->Controls->Add(this->label_login);
			this->Controls->Add(this->button_PassVisibility);
			this->Controls->Add(this->button_applyUser);
			this->Controls->Add(this->textBox_repPass);
			this->Controls->Add(this->textBox_pass);
			this->Controls->Add(this->textBox_RegLogin);
			this->Controls->Add(this->gunaLabel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RegistrationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegistrationForm";
			this->Load += gcnew System::EventHandler(this, &RegistrationForm::RegistrationForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &RegistrationForm::RegistrationForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &RegistrationForm::RegistrationForm_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_applyUser))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_PassVisibility))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButton_exit))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_applyUser_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (textBox_pass->Text != textBox_repPass->Text)
		{
			MessageBox::Show("Не соответвствие полей ПАРОЛЯ и ПОВТОРА ПАРОЛЯ");
		}
		if (textBox_pass->Text->Length > 5 && textBox_RegLogin->Text->Length > 4 && textBox_pass->Text == textBox_repPass->Text) {
			SQLiteConnection^ con = gcnew SQLiteConnection("Data Source=DataBases\\OAiP.db");
			try
			{
				con->Open();
				SQLiteCommand^ cmd = con->CreateCommand();
				cmd->CommandText = "SELECT id FROM Users WHERE Login='" + textBox_RegLogin->Text + "'";
				SQLiteDataReader^ reader = cmd->ExecuteReader();
				if (reader->HasRows)
				{
					MessageBox::Show("Пользователь с таким же логином уже существует, придумайте новый");
					textBox_pass->Text = "";
					textBox_pass->Text = "";
					textBox_repPass->Text = "";
					reader->Close();
					delete reader;
					delete cmd;
				}
				else
				{
					reader->Close();
					delete reader;
					cmd->CommandText = "INSERT INTO Users (Login, Password) VALUES('" + textBox_RegLogin->Text + "','" + textBox_pass->Text + "');";
					cmd->ExecuteNonQuery();
					MessageBox::Show("Пользователь с логином " + textBox_RegLogin->Text + " успешно зарегестрирован!");
					this->Close();
				}
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Произошла непредвиденная ошибка! " + e->Message);
			}
			finally
			{
				con->Close();
				delete (IDisposable^)con;
			}
		}
	}
private: System::Void imageButton_exit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
private: System::Void button_PassVisibility_Click(System::Object^ sender, System::EventArgs^ e) 
{
	System::ComponentModel::ComponentResourceManager^ resources2 = (gcnew System::ComponentModel::ComponentResourceManager(RegistrationForm::typeid));
	if (textBox_pass->isPassword)
	{
		FileStream^ stream = gcnew FileStream(Directory::GetCurrentDirectory() + "\\Images\\eye_show.png", FileMode::Open);
		button_PassVisibility->Image = Image::FromStream(stream);
		stream->Close();
		delete stream;
		textBox_pass->isPassword = false;
	}
	else
	{
		FileStream^ stream = gcnew FileStream(Directory::GetCurrentDirectory() + "\\Images\\eye_hide.png", FileMode::Open);
		button_PassVisibility->Image = Image::FromStream(stream);
		stream->Close();
		delete stream;
		textBox_pass->isPassword = true;
	}
}

private:
	Point^ lastPoint;
private: System::Void RegistrationForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		Left += e->X - lastPoint->X;
		Top += e->Y - lastPoint->Y;
	}
}
private: System::Void RegistrationForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	lastPoint = e->Location;
}
private: System::Void RegistrationForm_Load(System::Object^ sender, System::EventArgs^ e) 
{
	textBox_repPass->isPassword = true;
}
};
}
