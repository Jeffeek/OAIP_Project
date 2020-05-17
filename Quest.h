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
		//ID вопроса
		int GetQuestID()
		{
			return _questID;
		}

		void SetQuestID(int id)
		{
			_questID = id;
		}

		//ID темы
		int GetThemeID()
		{
			return _themeID;
		}

		void SetThemeID(int id)
		{
			_themeID = id;
		}

		//текст вопроса
		String^ GetQuest()
		{
			return _quest;
		}

		void SetQuest(String^ questText)
		{
			_quest = questText;
		}

		//первый вариант ответа
		String^ GetFirstQuestionText()
		{
			return _firstQuest;
		}

		void SetFirstQuestionText(String^ questText)
		{
			_firstQuest = questText;
		}

		//второй вариант ответа
		String^ GetSecondQuestionText()
		{
			return _secondQuest;
		}

		void SetSecondQuestionText(String^ questText)
		{
			_secondQuest = questText;
		}

		//третий вариант ответа
		String^ GetThirdQuestionText()
		{
			return _thirdQuest;
		}

		void SetThirdQuestionText(String^ questText)
		{
			_thirdQuest = questText;
		}

		//текст правильного ответа на вопрос
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

