#pragma once
#include <string>
#include <vector>
#include <set>
#include <list>
#include <algorithm>
#include <vector>
#include "Themes.h"
#include "Quest.h"

namespace OAIPProject 
{
	using namespace std;
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace Windows::Forms::Design;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;
	using namespace System::Text;
	using namespace cli;

	public ref class Testing
	{
	private:
		int _themeID;
		List<Quest^>QuestList;
	public:

		Testing(int themeID)
		{
			_themeID = themeID;
			FillThemeTest();
		}
	private:
		//TODO: доделать сбор вопросов для теста
		void FillThemeTest()
		{
			SQLiteConnection^ db = gcnew SQLiteConnection("Data Source=" + "DataBases\\OAiP.db");
			try
			{
				db->Open();
				try
				{
					SQLiteCommand^ cmd = db->CreateCommand();
					cmd->CommandText = "SELECT * FROM TESTs WHERE ThemeID=" + _themeID;
					SQLiteDataReader^ reader = cmd->ExecuteReader();
					while (reader->Read())
					{
						Quest^ quest = gcnew Quest();
						quest->SetQuestID(reader->GetInt32(0));
						quest->SetThemeID(reader->GetInt32(1));
						quest->SetFirstQuestionText(reader->GetString(2));
						quest->SetSecondQuestionText(reader->GetString(3));
						quest->SetThirdQuestionText(reader->GetString(4));
						quest->SetRightAnswerText(reader->GetString(5));
						quest->SetQuest(reader->GetString(6));
						QuestList.Add(quest);
					}
					reader->Close();
					delete static_cast<IDisposable^>(reader);
				}
				catch (Exception^ e)
				{
					MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
				}
				db->Close();
			}
			finally
			{
				delete static_cast<IDisposable^>(db);
			}
		}

	public:
		int GetThemeID()
		{
			return _themeID;
		}

		void SetThemeID(int id)
		{
			_themeID = id;
		}

		Quest^ GetQuestByNumber(int id)
		{
			if (id < 0 || id > 2)
				throw gcnew Exception;
			return QuestList[id];
		}
	};
}

