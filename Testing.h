#pragma once
#include <string>
#include <vector>
#include <set>
#include <list>
#include <algorithm>
#include <vector>
#include "Themes.h"
namespace OAIPProject 
{
	using namespace std;
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
	using namespace System::Text;
	using namespace cli;

	public ref class Testing
	{
	private:
		String^ QUEST;
		String^ Question_1;
		String^ Question_2;
		String^ Question_3;
		String^ RightAnswer;
		int ID;
		int ThemeID;
	public:
		void SetQuestion_1(String^ Q)
		{
			Question_1 = Q;
		}

		void SetQuestion_2(String^ Q2)
		{
			Question_2 = Q2;
		}

		void SetQuestion_3(String^ Q3)
		{
			Question_3 = Q3;
		}

		void SetQUEST(String^ text)
		{
			QUEST = text;
		}

		String^ GetQUEST()
		{
			return QUEST;
		}

		void SetRightAnswer(String^ RightAnswer)
		{
			this->RightAnswer = RightAnswer;
		}

		void SetID(int ID)
		{
			this->ID = ID;
		}

		void SetThemeID(int ThemeID)
		{
			this->ThemeID = ThemeID;
		}

		String^ GetRightAnswer()
		{
			return RightAnswer;
		}

		int GetThemeID()
		{
			return ThemeID;
		}

		int GetID()
		{
			return ID;
		}

		String^ GetQuestion_1()
		{
			return Question_1;
		}

		String^ GetQuestion_2()
		{
			return Question_2;
		}

		String^ GetQuestion_3()
		{
			return Question_3;
		}

	};
}

