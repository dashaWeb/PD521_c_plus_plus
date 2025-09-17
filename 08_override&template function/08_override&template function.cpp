#include <iostream>
#include <time.h>
using namespace std;

// override function
//int sum(int a, int b)
//{
//	return a + b;
//}
//double sum(double a, double b)
//{
//	return a + b;
//}
//double sum(double a, int b)
//{
//	return a + b;
//}
//char sum(char a, char b)
//{
//	return a + b;
//}
//string sum(string a, string b)
//{
//	return a + b;
//}

// template function

template<typename T>
T sum(T a, T b)
{
	return a + b;
}

template<typename T, typename T2>
auto sum(T a, T2 b)
{
	return a + b; // int + double
}

//void fillArray(int arr[], size_t length, int min = 1, int max = 10)
//{
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = min + rand() % (max - min + 1);
//	}
//}
//
//void fillArray(double arr[], size_t length, int min = 1, int max = 10)
//{
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = min + rand() % (max - min + 1);
//	}
//}
//
//void fillArray(char arr[], size_t length, int min = 1, int max = 10)
//{
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = min + rand() % (max - min + 1);
//	}
//}
template <typename T>
void fillArray(T arr[], size_t length, int min = 1, int max = 10)
{
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}

void fillArray(double arr[], size_t length, int min = 1, int max = 10)
{
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = (min + rand() % (max * 10 - min + 1)) * 0.1;
	}
}


template <typename T>
void printArray(T arr[], size_t length, string prompt = "")
{
	cout << prompt << (prompt.size() == 0 ? "" : " :: \t");
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

//void printArray(int arr[], size_t length, string prompt = "")
//{
//	cout << prompt << (prompt.size() == 0 ? "" : " :: \t");
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//}
//
//void printArray(double arr[], size_t length, string prompt = "")
//{
//	cout << prompt << (prompt.size() == 0 ? "" : " :: \t");
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//}
//
//void printArray(char arr[], size_t length, string prompt = "")
//{
//	cout << prompt << (prompt.size() == 0 ? "" : " :: \t");
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//}
int main()
{
	string name = "Name";
	string surname = "Surname";
	cout << "Test sum(2,5) ==> " << sum(2, 5) << endl; // 7
	cout << "Test sum(2.5,5.9) ==> " << sum(2.5, 5.9) << endl; // 8.4
	cout << "Test sum('a','b') ==> " << sum('a', 'b') << endl; // 8.4
	cout << "Test sum(\"Name\"',\"Surname\"') ==> " << sum(name, surname) << endl; // Error
	cout << "Test sum(2.5,5.9) ==> " << sum(2.6, 5) << endl; // 7.6
	cout << "Test sum(2.5,5.9) ==> " << sum(2, 5.9) << endl; // 7.9
	srand(time(0));


	auto number = 2;
	auto number_2 = 2.5;
	auto flag = true;
	auto symbol = 'A';

	string line = "Line";

	auto text = line;
	

	const int SIZE = 10;
	int arr[SIZE]{};
	fillArray(arr, SIZE);
	printArray(arr, SIZE);
	printArray(arr, SIZE, "Print Array");

	/*int rnd[16]{};
	fillArray(rnd, 16, 0, 15);
	printArray(rnd, 16);*/

	double arr_double[SIZE]{};
	fillArray(arr_double, SIZE);
	printArray(arr_double, SIZE, "Print Array Double");

	char arr_char[SIZE];
	fillArray(arr_char, SIZE, 97, 122);
	printArray(arr_char, SIZE, "Print Array char");
}

