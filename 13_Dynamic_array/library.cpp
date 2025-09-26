#include "library.h"

int* createArray(size_t size)
{
	return new int[size];
}

void fillArray(int* arr, size_t size, int min, int max)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}

void printArray(int* arr, size_t size, string prompt)
{
	cout << (prompt.size() > 0 ? prompt + " :: " : "");
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//Функція видалення динамічного масиву.
void deleteArray(int*& arr)
{
	delete[] arr;
	arr = nullptr;
}
//Функція додавання елемента в кінець масиву.
void pushBack(int*& arr, int& size, int value)
{
	int* tmp = new int[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[size] = value;
	size++;
	delete[]arr;
	arr = tmp;
}

void popFront(int*& arr, int& size)
{
	int* tmp = new int[--size];
	for (size_t i = 0; i < size; i++)
	{
		tmp[i] = arr[i + 1];
	}
	deleteArray(arr);
	arr = tmp;
}

void insert(int*& arr, int& size, int value, int index)
{
	if (index < 0 or index > size)
	{
		cout << "Error Index"; return;
	}
	int* tmp = new int[size + 1];
	tmp[index] = value;
	for (size_t i = 0; i < size; i++)
	{
		if (i < index)
			tmp[i] = arr[i];
		else
			tmp[i + 1] = arr[i];
	}
	size++;
	deleteArray(arr);
	arr = tmp;

}
