#pragma once

namespace OAIPProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;
	using namespace Bunifu::Framework::UI;
	using namespace Guna::UI::Lib;
	using namespace  XanderUI;


	/// <summary>
	/// Сводка для AdminMain
	/// </summary>
	public ref class AdminMain : public System::Windows::Forms::Form
	{
	public:
		AdminMain(void)
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
		~AdminMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: Bunifu::Framework::UI::BunifuDropdown^ comboBox_OpenTable;

	private: Guna::UI::WinForms::GunaDataGridView^ DataGridTables;
	private: Bunifu::Framework::UI::BunifuImageButton^ button_ChangeTable;
	private: System::Windows::Forms::Label^ label3;

	private: 
		SQLiteConnection^ con;
		SQLiteDataAdapter^ dataAdapter;
		SQLiteCommandBuilder^ commandBuilder;
		DataSet^ dataSet;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminMain::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox_OpenTable = (gcnew Bunifu::Framework::UI::BunifuDropdown());
			this->DataGridTables = (gcnew Guna::UI::WinForms::GunaDataGridView());
			this->button_ChangeTable = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->imageButton_exit = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridTables))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_ChangeTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButton_exit))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label1->Location = System::Drawing::Point(303, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ФОРМА АДМИНА";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Cyan;
			this->label2->Location = System::Drawing::Point(-5, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ОТКРЫТЬ ТАБЛИЦУ: ";
			// 
			// comboBox_OpenTable
			// 
			this->comboBox_OpenTable->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_OpenTable->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->comboBox_OpenTable->BackColor = System::Drawing::Color::Transparent;
			this->comboBox_OpenTable->BorderRadius = 3;
			this->comboBox_OpenTable->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_OpenTable->ForeColor = System::Drawing::Color::White;
			this->comboBox_OpenTable->Items = gcnew cli::array< System::String^  >(3) { L"ЮЗЕРЫ", L"ТЕМЫ", L"ТЕСТЫ" };
			this->comboBox_OpenTable->Location = System::Drawing::Point(2, 79);
			this->comboBox_OpenTable->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox_OpenTable->Name = L"comboBox_OpenTable";
			this->comboBox_OpenTable->NomalColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->comboBox_OpenTable->onHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->comboBox_OpenTable->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox_OpenTable->selectedIndex = -1;
			this->comboBox_OpenTable->Size = System::Drawing::Size(136, 28);
			this->comboBox_OpenTable->TabIndex = 2;
			this->comboBox_OpenTable->onItemSelected += gcnew System::EventHandler(this, &AdminMain::comboBox_OpenTable_onItemSelected);
			// 
			// DataGridTables
			// 
			this->DataGridTables->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			this->DataGridTables->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->DataGridTables->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->DataGridTables->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DataGridTables->BackgroundColor = System::Drawing::Color::Black;
			this->DataGridTables->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DataGridTables->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->DataGridTables->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableAlwaysIncludeHeaderText;
			this->DataGridTables->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridTables->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->DataGridTables->ColumnHeadersHeight = 4;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DataGridTables->DefaultCellStyle = dataGridViewCellStyle3;
			this->DataGridTables->EnableHeadersVisualStyles = false;
			this->DataGridTables->GridColor = System::Drawing::Color::SeaGreen;
			this->DataGridTables->Location = System::Drawing::Point(144, 58);
			this->DataGridTables->Name = L"DataGridTables";
			this->DataGridTables->RowHeadersVisible = false;
			this->DataGridTables->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DataGridTables->Size = System::Drawing::Size(632, 254);
			this->DataGridTables->TabIndex = 4;
			this->DataGridTables->Theme = Guna::UI::WinForms::GunaDataGridViewPresetThemes::Guna;
			this->DataGridTables->ThemeStyle->AlternatingRowsStyle->BackColor = System::Drawing::Color::White;
			this->DataGridTables->ThemeStyle->AlternatingRowsStyle->Font = nullptr;
			this->DataGridTables->ThemeStyle->AlternatingRowsStyle->ForeColor = System::Drawing::Color::Empty;
			this->DataGridTables->ThemeStyle->AlternatingRowsStyle->SelectionBackColor = System::Drawing::Color::Empty;
			this->DataGridTables->ThemeStyle->AlternatingRowsStyle->SelectionForeColor = System::Drawing::Color::Empty;
			this->DataGridTables->ThemeStyle->BackColor = System::Drawing::Color::Black;
			this->DataGridTables->ThemeStyle->GridColor = System::Drawing::Color::SeaGreen;
			this->DataGridTables->ThemeStyle->HeaderStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->DataGridTables->ThemeStyle->HeaderStyle->BorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->DataGridTables->ThemeStyle->HeaderStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F));
			this->DataGridTables->ThemeStyle->HeaderStyle->ForeColor = System::Drawing::Color::White;
			this->DataGridTables->ThemeStyle->HeaderStyle->HeaightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::EnableResizing;
			this->DataGridTables->ThemeStyle->HeaderStyle->Height = 4;
			this->DataGridTables->ThemeStyle->ReadOnly = false;
			this->DataGridTables->ThemeStyle->RowsStyle->BackColor = System::Drawing::Color::White;
			this->DataGridTables->ThemeStyle->RowsStyle->BorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->DataGridTables->ThemeStyle->RowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F));
			this->DataGridTables->ThemeStyle->RowsStyle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->DataGridTables->ThemeStyle->RowsStyle->Height = 22;
			this->DataGridTables->ThemeStyle->RowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->DataGridTables->ThemeStyle->RowsStyle->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
			// 
			// button_ChangeTable
			// 
			this->button_ChangeTable->BackColor = System::Drawing::Color::SeaGreen;
			this->button_ChangeTable->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_ChangeTable.Image")));
			this->button_ChangeTable->ImageActive = nullptr;
			this->button_ChangeTable->Location = System::Drawing::Point(9, 263);
			this->button_ChangeTable->Name = L"button_ChangeTable";
			this->button_ChangeTable->Size = System::Drawing::Size(126, 49);
			this->button_ChangeTable->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->button_ChangeTable->TabIndex = 5;
			this->button_ChangeTable->TabStop = false;
			this->button_ChangeTable->Zoom = 10;
			this->button_ChangeTable->Click += gcnew System::EventHandler(this, &AdminMain::button_ChangeTable_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->label3->Location = System::Drawing::Point(6, 245);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"ИЗМЕНИТЬ ДАННЫЕ";
			// 
			// imageButton_exit
			// 
			this->imageButton_exit->BackColor = System::Drawing::Color::Crimson;
			this->imageButton_exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageButton_exit.Image")));
			this->imageButton_exit->ImageActive = nullptr;
			this->imageButton_exit->Location = System::Drawing::Point(756, 2);
			this->imageButton_exit->Name = L"imageButton_exit";
			this->imageButton_exit->Size = System::Drawing::Size(20, 20);
			this->imageButton_exit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageButton_exit->TabIndex = 23;
			this->imageButton_exit->TabStop = false;
			this->imageButton_exit->Zoom = 10;
			this->imageButton_exit->Click += gcnew System::EventHandler(this, &AdminMain::imageButton_exit_Click);
			// 
			// AdminMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(778, 320);
			this->ControlBox = false;
			this->Controls->Add(this->imageButton_exit);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button_ChangeTable);
			this->Controls->Add(this->DataGridTables);
			this->Controls->Add(this->comboBox_OpenTable);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AdminMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminMain";
			this->Load += gcnew System::EventHandler(this, &AdminMain::AdminMain_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminMain::AdminMain_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminMain::AdminMain_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridTables))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_ChangeTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButton_exit))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button_ChangeTable_Click(System::Object^ sender, System::EventArgs^ e) 
{
	dataAdapter->Update(dataSet->Tables[0]);
}
private: System::Void AdminMain_Load(System::Object^ sender, System::EventArgs^ e) 
{
	con = gcnew SQLiteConnection("Data Source=DataBases\\OAiP.db");
	comboBox_OpenTable->selectedIndex = 0;
}
private: System::Void imageButton_exit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	delete (IDisposable^)con;
	Application::Exit();
}
private: System::Void comboBox_OpenTable_onItemSelected(System::Object^ sender, System::EventArgs^ e) 
{
	if (comboBox_OpenTable->selectedIndex == 0)
	{
		dataAdapter = gcnew SQLiteDataAdapter("SELECT * FROM Users", con);
		dataSet = gcnew DataSet();
		commandBuilder = gcnew SQLiteCommandBuilder(dataAdapter);
		dataAdapter->Fill(dataSet);
		DataGridTables->DataSource = dataSet->Tables[0];
	}
	else if (comboBox_OpenTable->selectedIndex == 1)
	{
		dataAdapter = gcnew SQLiteDataAdapter("SELECT * FROM Themes", con);
		dataSet = gcnew DataSet();
		commandBuilder = gcnew SQLiteCommandBuilder(dataAdapter);
		dataAdapter->Fill(dataSet);
		DataGridTables->DataSource = dataSet->Tables[0];
	}
	else if (comboBox_OpenTable->selectedIndex == 2)
	{
		dataAdapter = gcnew SQLiteDataAdapter("SELECT * FROM TESTs", con);
		dataSet = gcnew DataSet();
		commandBuilder = gcnew SQLiteCommandBuilder(dataAdapter);
		dataAdapter->Fill(dataSet);
		DataGridTables->DataSource = dataSet->Tables[0];
		for (int i = 0; i < DataGridTables->ColumnCount; i++)
		{
			for (int j = 0; DataGridTables->RowCount; j++)
			{
				if (i == 1)
				{
					DataGridTables[i, j]->ReadOnly = true;
					break;
				}
				else
				{
					break;
				}
			}
		}
	}

	for (int i = 0; i < DataGridTables->ColumnCount; i++) 
	{
		for (int j = 0; DataGridTables->RowCount; j++)
		{
			if (i == 0)
			{
				DataGridTables[i,j]->ReadOnly = true;
				break;
			}
			else
			{
				break;
			}
		}
	}
	DataGridTables->ColumnHeadersHeight = 25;
}
private: Point^ lastPoint;
private: System::Void AdminMain_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		Left += e->X - lastPoint->X;
		Top += e->Y - lastPoint->Y;
	}
}
private: System::Void AdminMain_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	lastPoint = e->Location;
}
};
}
