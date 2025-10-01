#include <iostream>
#include <ctime>
using namespace std;


template <typename T>
void fill(T** arr, const int& row, const int& col, const int& min = 1, const int& max = 10)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = min + rand() % (max - min + 1);
		}
	}
}

template <typename T>
void print(T** arr, const int& row, const int& col, const string prompt = "")
{
	cout << (prompt.empty() ? "" : prompt + " :: \n");
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
//Написати функцію, що додає рядок двовимірному масиву в кінець.
template<typename T>
void pushBack(T**& arr, int& row, const int& col) {

	T** tmp = new T * [row + 1];
	for (size_t i = 0; i < row; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[row] = new T[col]{};
	row++;
	delete[] arr;
	arr = tmp;
}
//Написати функцію, що додає рядок двовимірному масиву на початок.
template<typename T>
void pushFront(T**& arr, int& row, const int& col) {

}
//Написати функцію, що додає рядок двовимірному масиву в зазначену позицію.
template<typename T>
void insert(T**& arr, int& row, const int& col, const int& index) {
	if (index < 0 or index > row) {
		cout << "Error Index" << endl;
		return;
	}
	T** tmp = new T * [row + 1];
	for (size_t i = 0; i < row; i++)
	{
		if (i < index)
		{
			tmp[i] = arr[i];
		}
		else {
			tmp[i + 1] = arr[i];
		}
	}
	tmp[index] = new T[col]{};
	row++;
	delete[] arr;
	arr = tmp;
}
//Написати функцію, що видаляє рядок двовимірного масиву за вказаним номером.
template<typename T>
void remove(T**& arr, int& row, const int& index) {
	if (index < 0 or index >= row) {
		cout << "Error Index" << endl;
		return;
	}
	T** tmp = new T * [--row];
	for (size_t i = 0; i < row; i++)
	{
		if (i < index)
		{
			tmp[i] = arr[i];
		}
		else {
			tmp[i] = arr[i + 1];
		}
	}
	delete[] arr[index];
	delete[] arr;
	arr = tmp;
}
int main()
{
	int row = 4, col = 6;
	cout << "Enter size :: ";
	//cin >> row >> col;
	int** arr = new int* [row];


	for (size_t i = 0; i < row; i++)
	{
		arr[i] = new int[col];
	}

	fill(arr, row, col);
	print(arr, row, col, "Print Mult Array");

	cout << endl;

	pushBack(arr, row, col);
	print(arr, row, col, "Print Push Back ");

	cout << endl;

	insert(arr, row, col, 2);
	print(arr, row, col, "Print insert   ");


	cout << endl;
	remove(arr, row, 3);
	print(arr, row, col, "Print insert   ");


	for (size_t i = 0; i < row; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;

}
