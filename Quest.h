#pragma once
#include <string>
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
	using namespace System::Data::SQLite;
	using namespace System::Text;
	using namespace cli;

	public ref class Quest
	{
	private:
		String^ _quest;
		String^ _firstQuest;
		String^ _secondQuest;
		String^ _thirdQuest;
		String^ _rightAnswerText;
		int _questID;
		int _themeID;
	public:
		//ID �������
		int GetQuestID()
		{
			return _questID;
		}

		void SetQuestID(int id)
		{
			_questID = id;
		}

		//ID ����
		int GetThemeID()
		{
			return _themeID;
		}

		void SetThemeID(int id)
		{
			_themeID = id;
		}

		//����� �������
		String^ GetQuest()
		{
			return _quest;
		}

		void SetQuest(String^ questText)
		{
			_quest = questText;
		}

		//������ ������� ������
		String^ GetFirstQuestionText()
		{
			return _firstQuest;
		}

		void SetFirstQuestionText(String^ questText)
		{
			_firstQuest = questText;
		}

		//������ ������� ������
		String^ GetSecondQuestionText()
		{
			return _secondQuest;
		}

		void SetSecondQuestionText(String^ questText)
		{
			_secondQuest = questText;
		}

		//������ ������� ������
		String^ GetThirdQuestionText()
		{
			return _thirdQuest;
		}

		void SetThirdQuestionText(String^ questText)
		{
			_thirdQuest = questText;
		}

		//����� ����������� ������ �� ������
		String^ GetRightAnswerText()
		{
			return _rightAnswerText;
		}

		void SetRightAnswerText(String^ questText)
		{
			_rightAnswerText = questText;
		}

	};
}

