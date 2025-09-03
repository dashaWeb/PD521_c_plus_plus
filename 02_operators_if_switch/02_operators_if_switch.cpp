#include <iostream>
using namespace std;


int main()
{
	// Унарні оператори
	// // int a = 5
	// -a (a * (-1))
	// !
	//bool flag = true;
	//flag = !flag; // false
	// a++, a--, ++a, --a;

	// Бінарний оператор
	// a + b, b - c; a == b
	// 
	// Тернарний
	// a ? b : c


	//double a = 5;
	//double b = 3;

	//cout << "Increment a --> " << a++ << endl;
	//cout << "Value a --> " << a << endl;

	//double res = a + b++ * a++ - --a + ++b; // 
	/*
	* error value
		1. b{3}++ * a{5}++ --> 3 * 5 = 15
		2. a{5} + 15 --> 20
		3. 20 - --a{4} --> 16
		4. 16 + ++b{4} --> 20

	true
		1. --a {5 - 1 = 4} --> a{4}
		2. ++b {3 + 1 = 4} --> b{4}
		3. b{4}++ * a{4}++ --> 16
		4. a{4} + 16 --> 20
		5. 20 - {a}4 --> 16
		6. 16 + 4 --> 20

	*/
	/*cout << "Result :: " << res << endl;
	cout << "A :: " << a << "\t B :: " << b << endl;*/


	/*bool flag = true;
	flag = !flag;*/
	//cout << (flag ? "Green" : "Red") << endl;
	/*flag ? cout << "Green" << endl : cout << "Red" << endl;*/


	// >=, >, <=, <, ==, !=
	/*int a = 5;
	int b = 7;
	cout << "(a == b)" << boolalpha << (a == b) << endl;
	cout << "(a > b)" << boolalpha << (a > b) << endl;
	cout << "(a < b)" << boolalpha << (a < b) << endl;
	cout << "(a >= b)" << boolalpha << (a >= b) << endl;
	cout << "(a <= b)" << boolalpha << (a <= b) << endl;
	cout << "(a != b)" << boolalpha << (a != b) << endl;*/

	/*int day;
	cout << "Enter number day :: ";
	cin >> day;

	if (day == 1) {
		cout << "Monday" << endl;
	}
	else if (day == 2)
	{
		cout << "Tuesday" << endl;
	}
	else if (day == 3) {
		cout << "Wednesday" << endl;
	}
	else {
		cout << "Error" << endl;
	}*/

	// && - and
	// || - or

	//int number;
	//cout << "Enter number :: ";
	//cin >> number;
	//if (number >= 0 && number <= 20)
	//{
	//    cout << "Ok. in range" << endl;
	//}
	//else {
	//    cout << "no Ok. in range" << endl;
	//}

	/*int month;
	cout << "Enter number month :: ";
	cin >> month;

	if (month == 1 or month == 3 || month == 5 or month == 7 or month == 8 or month == 10 or month == 12) {
		cout << "31 days" << endl;
	}
	else if (month == 4 or month == 6 or month == 9 or month == 11)
	{
		cout << "30 days" << endl;
	}
	else if (month == 2)
	{
		int year;
		cout << "Enter year :: ";
		cin >> year;
		cout << (year % 4 == 0 and year % 100 != 0 or year % 400 == 0 ? "29 days" : "28 days") << endl;
	}
	else {
		cout << "Error" << endl;
	}*/
	/*int day;
	cout << "Enter number day :: ";
	cin >> day;

	switch (day)
	{
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	default:
		cout << "Error value" << endl;
		break;
	}*/
	// 10.04
	// січень(31), лютий(28,29), березень(31) + 10
	// 31 + 28 + 31 + 10 -> 100
	//int day, month;
	//cout << "Enter day month :: "; // 31.12
	//cin >> day >> month;

	//int all_days = 0;
	//month--;
	//switch (month)
	//{
	//case 11:
	//	all_days += 30;
	//case 10:
	//	all_days += 31;
	//case 9:
	//	all_days += 30;
	//case 8:
	//	all_days += 31;
	//case 7:
	//	all_days += 31;
	//case 6:
	//	all_days += 30;
	//case 5:
	//	all_days += 31;
	//case 4:
	//	all_days += 30;
	//case 3:
	//	all_days += 31;
	//case 2:
	//	int year;
	//	cout << "Enter year :: ";
	//	cin >> year;
	//	all_days += (year % 4 ==0 and year % 100 != 0 or year % 400 == 0 ? 29 : 28);
	//case 1:
	//	all_days += 31;
	//}
	//all_days += day;
	//cout << "All days :: " << all_days << endl;

	int month;
	cout << "Enter number month :: ";
	cin >> month;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "31 days" << endl; break;
	case 2:
		int year;
		cout << "Enter year :: ";
		cin >> year;
		cout << (year % 4 == 0 and year % 100 != 0 or year % 400 == 0 ? "29 days" : "28 days") << endl;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "30 days" << endl; break;
	default:
		break;
	}

}

