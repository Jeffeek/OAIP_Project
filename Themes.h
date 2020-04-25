#pragma once
#include <string>
#include <vector>
#include <set>
#include <list>
#include <algorithm>
#include <vector>

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
	public ref class Themes
	{
	private:
		int ID;
		String^ Name;
		String^ FilePath;
		String^ DifficultyString;
		int DifficultyInt;
	public:
#pragma region ID
		void SetID(int id)
		{
			ID = id;
		}

		int GetID()
		{
			return ID;
		}
#pragma endregion
		#pragma region Name
		void SetName(String^ name)
		{
			Name = name;
		}

		String^ GetName()
		{
			return Name;
		}
		#pragma endregion

		#pragma region FilePath
		void SetFilePath(String^ filePath)
		{
			FilePath = filePath;
		}

		String^ GetFilePath()
		{
			return FilePath;
		}
		#pragma endregion

		#pragma region Difficulty

		#pragma region DifficultyINT
		int GetDifficultyInt()
		{
			return DifficultyInt;
		}
		#pragma endregion

		#pragma region DifficultySTRING
		void SetDifficulty(String^ difficulty)
		{
			DifficultyString = difficulty;
			if (DifficultyString == "EASY")
				DifficultyInt = 1;
			else if (DifficultyString == "MEDIUM")
				DifficultyInt = 2;
			else if (DifficultyString == "HARD")
				DifficultyInt = 3;
		}
		String^ GetDifficultyString()
		{
			return DifficultyString;
		}
		#pragma endregion

		#pragma endregion
	};
}

