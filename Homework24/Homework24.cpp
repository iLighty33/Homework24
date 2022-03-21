#include <iostream>
#include <string>

using namespace std;

bool isPalindrom(string word);

int searchInString(string word);

void showString(string word);

int main() {
	setlocale(LC_ALL, "Russian");

	// Задача 1

	cout << "Задача 1.\n";
	string str = "Hello world!";
	char sym = 'l';
	string result;

	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			result += sym;

	cout << "newStr = " << result << endl;

	// Задача 2

	cout << "\nЗадача 2.\n";
	string word1 = "зАказ";
	string word2 = "роТаатОр";
	string word3 = "Палиндром";

	if (isPalindrom(word1))
		cout << "Слово \"" << word1 << "\" палидром" << endl;
	else
		cout << "Слово \"" << word1 << "\" не палидром" << endl;

	if (isPalindrom(word2))
		cout << "Слово \"" << word2 << "\" палиндром" << endl;
	else
		cout << "Слово \"" << word2 << "\" не палидром" << endl;

	if(isPalindrom(word3))
		cout << "Слово \"" << word3 << "\" палиндром" << endl;
	else
		cout << "Слово \"" << word3 << "\" не палидром" << endl;

	// Задача 3

	cout << "\nЗадача 3.\n";

	string task3 = "Здарова, ну чё, как дела? Да, нормально!";
	showString(task3);
	cout << "Общее количество пробелов, точек и запятых: " << searchInString(task3) << endl;

	return 0;
}

// Задача 3

int searchInString(string word) {
	int space = 0;
	int dot = 0;
	int	decimalPoint = 0;
	int exclamationPoint = 0;
	int	questionMark = 0;

	for (int i = 0; i < word.size(); i++) {
		if (word.find(" "))
			space++;
		else
			if (word.find("."))
				dot++;
			else
				if (word.find(","))
					decimalPoint++;
				else
					if (word.find("!"))
						exclamationPoint++;
					else
						if (word.find("?"))
							questionMark++;

	}
	

	int summary = space + dot + decimalPoint + exclamationPoint + questionMark;
	return summary;
}

void showString(string word) {
	for (int i = 0; i < word.size(); i++)
		cout << word[i];
	cout << endl;
}

// Задача 2

bool isPalindrom(string word) {


	for (int i = 0; i < word.length(); i++)
		word[i] = tolower(word[i]);

	string str1;
	string str2;

	for (int i = 0; i < word.length() / 2 ; i++) 
		str1 += word[i];
		
	for (int i = 0; i < word.length() / 2; i++)
		str2 += word[word.length()-1 - i];

	if (str1 == str2)
		return true;
	else
		return false;
	
}

