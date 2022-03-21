#include <iostream>
#include <string>

using namespace std;

bool isPalindrom(string word);

int searchInString(string word);

void showString(string word);

int main() {
	setlocale(LC_ALL, "Russian");

	// ������ 1

	cout << "������ 1.\n";
	string str = "Hello world!";
	char sym = 'l';
	string result;

	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			result += sym;

	cout << "newStr = " << result << endl;

	// ������ 2

	cout << "\n������ 2.\n";
	string word1 = "�����";
	string word2 = "��������";
	string word3 = "���������";

	if (isPalindrom(word1))
		cout << "����� \"" << word1 << "\" ��������" << endl;
	else
		cout << "����� \"" << word1 << "\" �� ��������" << endl;

	if (isPalindrom(word2))
		cout << "����� \"" << word2 << "\" ���������" << endl;
	else
		cout << "����� \"" << word2 << "\" �� ��������" << endl;

	if(isPalindrom(word3))
		cout << "����� \"" << word3 << "\" ���������" << endl;
	else
		cout << "����� \"" << word3 << "\" �� ��������" << endl;

	// ������ 3

	cout << "\n������ 3.\n";

	string task3 = "�������, �� ��, ��� ����? ��, ���������!";
	showString(task3);
	cout << "����� ���������� ��������, ����� � �������: " << searchInString(task3) << endl;

	return 0;
}

// ������ 3

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

// ������ 2

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

