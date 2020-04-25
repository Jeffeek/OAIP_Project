#pragma once
#include <string>
namespace OAIPProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;

	/// <summary>
	/// Сводка для ForgotPassword
	/// </summary>
	public ref class ForgotPassword : public System::Windows::Forms::Form
	{
	public:
		ForgotPassword(void)
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
		~ForgotPassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ textBox_login;
	protected:
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	private: Bunifu::Framework::UI::BunifuImageButton^ button_SearchPASS;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel2;
	private: Bunifu::Framework::UI::BunifuImageButton^ imageButton_exit;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ForgotPassword::typeid));
			this->textBox_login = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->button_SearchPASS = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->gunaLabel2 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->imageButton_exit = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_SearchPASS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButton_exit))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox_login
			// 
			this->textBox_login->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_login->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_login->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->textBox_login->HintForeColor = System::Drawing::Color::MediumTurquoise;
			this->textBox_login->HintText = L"";
			this->textBox_login->isPassword = false;
			this->textBox_login->LineFocusedColor = System::Drawing::Color::MediumOrchid;
			this->textBox_login->LineIdleColor = System::Drawing::Color::SpringGreen;
			this->textBox_login->LineMouseHoverColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_login->LineThickness = 3;
			this->textBox_login->Location = System::Drawing::Point(23, 103);
			this->textBox_login->Margin = System::Windows::Forms::Padding(4);
			this->textBox_login->Name = L"textBox_login";
			this->textBox_login->Size = System::Drawing::Size(250, 33);
			this->textBox_login->TabIndex = 0;
			this->textBox_login->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"Unispace", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel1->ForeColor = System::Drawing::Color::Turquoise;
			this->gunaLabel1->Location = System::Drawing::Point(18, 22);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(255, 33);
			this->gunaLabel1->TabIndex = 1;
			this->gunaLabel1->Text = L"FORGOT PASSWORD";
			// 
			// button_SearchPASS
			// 
			this->button_SearchPASS->BackColor = System::Drawing::Color::SeaGreen;
			this->button_SearchPASS->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_SearchPASS.Image")));
			this->button_SearchPASS->ImageActive = nullptr;
			this->button_SearchPASS->Location = System::Drawing::Point(73, 158);
			this->button_SearchPASS->Name = L"button_SearchPASS";
			this->button_SearchPASS->Size = System::Drawing::Size(147, 35);
			this->button_SearchPASS->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->button_SearchPASS->TabIndex = 2;
			this->button_SearchPASS->TabStop = false;
			this->button_SearchPASS->Zoom = 10;
			this->button_SearchPASS->Click += gcnew System::EventHandler(this, &ForgotPassword::button_SearchPASS_Click);
			// 
			// gunaLabel2
			// 
			this->gunaLabel2->AutoSize = true;
			this->gunaLabel2->Font = (gcnew System::Drawing::Font(L"Unispace", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel2->ForeColor = System::Drawing::Color::Magenta;
			this->gunaLabel2->Location = System::Drawing::Point(111, 74);
			this->gunaLabel2->Name = L"gunaLabel2";
			this->gunaLabel2->Size = System::Drawing::Size(77, 25);
			this->gunaLabel2->TabIndex = 3;
			this->gunaLabel2->Text = L"LOGIN";
			// 
			// imageButton_exit
			// 
			this->imageButton_exit->BackColor = System::Drawing::Color::Red;
			this->imageButton_exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageButton_exit.Image")));
			this->imageButton_exit->ImageActive = nullptr;
			this->imageButton_exit->Location = System::Drawing::Point(270, 3);
			this->imageButton_exit->Name = L"imageButton_exit";
			this->imageButton_exit->Size = System::Drawing::Size(20, 20);
			this->imageButton_exit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageButton_exit->TabIndex = 22;
			this->imageButton_exit->TabStop = false;
			this->imageButton_exit->Zoom = 10;
			this->imageButton_exit->Click += gcnew System::EventHandler(this, &ForgotPassword::imageButton_exit_Click);
			// 
			// ForgotPassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(293, 216);
			this->Controls->Add(this->imageButton_exit);
			this->Controls->Add(this->gunaLabel2);
			this->Controls->Add(this->button_SearchPASS);
			this->Controls->Add(this->gunaLabel1);
			this->Controls->Add(this->textBox_login);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ForgotPassword";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ForgotPassword";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_SearchPASS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButton_exit))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_SearchPASS_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SQLiteConnection^ con = gcnew SQLiteConnection("Data Source=DataBases\\OAiP.db");
		try
		{
			con->Open();
			SQLiteCommand^ cmd = con->CreateCommand();
			cmd->CommandText = "SELECT Password FROM Users WHERE Login='" + textBox_login->Text + "';";
			if (cmd->ExecuteScalar() == nullptr)
			{
				MessageBox::Show("Пользователь с Логином " + textBox_login->Text + " не найден :(");
			}
			else 
			{
				MessageBox::Show("Ваш пароль был найден: " + cmd->ExecuteScalar() + "\nБольше не забывайте :)");
				this->Close();
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Произошла ошибка: " + e->Message);
			textBox_login->Text = "";
		}
		finally
		{
			con->Close();
			delete (IDisposable^)con;
		}
	}
private: System::Void imageButton_exit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
};
}
