#include <iostream>
#include <string>
using namespace std;


size_t strLen(const char* word)
{
	size_t counter = 0;
	while (word[counter] != '\0') counter++;
	return counter;
}

int main()
{
	// Plum
	/*char word[5];
	word[0] = 'P';
	word[1] = 'l';
	word[2] = 'u';
	word[3] = 'm';
	word[4] = '\0';

	cout << word << endl;*/

	/*char word[]{ 'P','l','u','m','\0'};
	cout << word << endl;*/

	/*string test = "Test";
	test[0] = 't';
	cout << test << endl;*/

	//char word[] = "orange";
	//cout << word << endl;
	////word[0] = 'a';
	//cout << word << endl;
	//for (size_t i = 0; i < strLen(word); i++)
	//{
	//    word[i] = word[i] - 32;
	//}
	//cout << word << endl;

	char word_1[] = "Orange";
	char word_2[] = "Plum";

	cout << "Length word_1 {" << word_1 << "} :: " << strLen(word_1) << endl;
	cout << "Length word_2 {" << word_2 << "} :: " << strLen(word_2) << endl;
	cout << "Length word_3 {" << "Hello" << "} :: " << strLen("Hello") << endl;
	cout << "\n\n ------------------------------ \n\n";
	cout << "Length word_1 {" << word_1 << "} :: " << strlen(word_1) << endl;
	cout << "Length word_2 {" << word_2 << "} :: " << strlen(word_2) << endl;
	cout << "Length word_3 {" << "Hello" << "} :: " << strlen("Hello") << endl;


	cout << "\n ===================== strcpy_s() =============================" << endl;
	char word[100] = "Plum";
	cout << "Before :: " << word << endl;

	//word = word_1;

	strcpy_s(word, word_1);
	cout << "After  :: " << word << endl;
	strcpy_s(word, "ABC");
	cout << "After  :: " << word << endl;

	char* one = new char[4];
	cout << "Before :: " << one << endl;

	strcpy_s(one, 4, "Red");
	cout << "After  :: " << one << endl;

	strncpy_s(word, "Lorem Ipsum", 4);
	cout << "After  :: " << word << endl;

	cout << "\n ===================== strcat_s() =============================" << endl;
	cout << "Before :: " << word << endl;
	strcat_s(word, "DEF");
	cout << "After  :: " << word << endl;
	strcat_s(word, "111");
	cout << "After  :: " << word << endl;

	char* res = new char[100];
	strcpy_s(res, 6, "Hello");
	cout << res << endl;

	strcat_s(res,100," World");
	cout << res << endl;
	strcat_s(res, 100, "!!! I Love C++");
	cout << res << endl;

	cout << "\n ===================== strcmp() =============================" << endl;

	char str1[10] = "qbc";
	char str2[10] = "abc";

	cout << str1 << " -- " << str2 << " :: " << strcmp(str1, str2) << endl;


	cout << "\n ===================== strncpy_s() =============================" << endl;
	char line[50];
	cout << "Before :: " << line << endl;
	strncpy_s(line, "Lorem ipsum", 6);
	cout << "After  :: " << line << endl;


	cout << "\n ===================== strncat_s() =============================" << endl;
	cout << "Before :: " << line << endl;
	strncat_s(line, "Lorem ipsum", 6);
	cout << "After  :: " << line << endl;


	cout << "\n ===================== strncmp() =============================" << endl;
	strcpy_s(str1, "abcd");
	strcpy_s(str2, "abcq");
	cout << str1 << " -- " << str2 << " :: " << strncmp(str1, str2,2) << endl;

	char str[] = "dT 423JH f!@";

	cout << "\n ===================== isalpha(str[i]) =============================" << endl;

	for (size_t i = 0; i < strlen(str); i++)
	{
		cout << "\t" << str[i] << " :: " << boolalpha << (bool)isalpha(str[i]) << endl;
	}

	cout << "\n ===================== isalnum(str[i]) =============================" << endl;

	for (size_t i = 0; i < strlen(str); i++)
	{
		cout << "\t" << str[i] << " :: " << boolalpha << (bool)isalnum(str[i]) << endl;
	}

	cout << "\n ===================== isdigit(str[i]) =============================" << endl;

	for (size_t i = 0; i < strlen(str); i++)
	{
		cout << "\t" << str[i] << " :: " << boolalpha << (bool)isdigit(str[i]) << endl;
	}

	cout << "\n ===================== isspace(str[i]) =============================" << endl;

	for (size_t i = 0; i < strlen(str); i++)
	{
		cout << "\t" << str[i] << " :: " << boolalpha << (bool)isspace(str[i]) << endl;
	}

	cout << "\n ===================== ispunct(str[i]) =============================" << endl;

	for (size_t i = 0; i < strlen(str); i++)
	{
		cout << "\t" << str[i] << " :: " << boolalpha << (bool)ispunct(str[i]) << endl;
	}


	cout << "\n ===================== islower(str[i]) =============================" << endl;

	for (size_t i = 0; i < strlen(str); i++)
	{
		cout << "\t" << str[i] << " :: " << boolalpha << (bool)islower(str[i]) << endl;
	}

	cout << "\n ===================== isupper(str[i]) =============================" << endl;

	for (size_t i = 0; i < strlen(str); i++)
	{
		cout << "\t" << str[i] << " :: " << boolalpha << (bool)isupper(str[i]) << endl;
	}

	cout << "\n ===================== tolower(str[i]) =============================" << endl;

	for (size_t i = 0; i < strlen(str); i++)
	{
		cout << "\t" << str[i] << " :: " << boolalpha << (char)tolower(str[i]) << endl;
	}

	cout << "\n ===================== toupper(str[i]) =============================" << endl;

	for (size_t i = 0; i < strlen(str); i++)
	{
		cout << "\t" << str[i] << " :: " << boolalpha << (char)toupper(str[i]) << endl;
	}


	char input[100];
	cout << "Enter name, surname :: ";
	/*cin >> input;

	cout << input << endl;
	cin >> input;
	cout << input << endl;*/
	cin.getline(input, 100);
	cout << input << endl;

	int age;
	cout << "Enter age :: ";
	cin >> age;
	cin.clear();
	cin.ignore();
	char email[30];
	cout << "Enter email :: ";
	cin.getline(email, 30);

	cout << input << endl;
	cout << email << endl;
	cout << "Age :: " << age << endl;

	string text;
	cout << "Enter name, surname :: ";
	//cin >> text;
	getline(cin,text);
	cout << text;

}
