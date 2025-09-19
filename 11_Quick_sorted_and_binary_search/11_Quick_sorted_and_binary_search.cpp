#include <iostream>
#include <ctime>
using namespace std;

template <typename T>
void uniqueValue(T arr[], size_t length, int min = 1, int max = 10);

template <typename T>
void printArray(T arr[], size_t length, string prompt = "");

template <typename T>
void quickSorted(T arr[], int left, int right);


template <typename T>
int binarySearch(T arr[], int left, int right, T value);


int main()
{
	srand(time(0));
	const int SIZE = 10;
	int arr[SIZE]{};
	uniqueValue(arr, SIZE);
	printArray(arr, SIZE, "Print Before :: ");
	quickSorted(arr, 0, SIZE - 1);
	printArray(arr, SIZE, "Print After  :: ");

	int number;
	while (true)
	{
		cout << "Enter number :: "; 
		cin >> number;
		cout << "Find index :: " << binarySearch(arr, 0, SIZE - 1, number) << endl;
	}
}


template<typename T>
void uniqueValue(T arr[], size_t length, int min, int max)
{
	for (size_t i = 0; i < length; )
	{
		int numb = min + rand() % (max - min + 1);
		bool flag = true;
		for (size_t j = 0; j < i; j++)
		{
			if (arr[j] == numb) {
				flag = false;
				break;
			}
		}
		if (flag)
		{
			arr[i] = numb;
			i++;
		}
	}
}

template <typename T>
void printArray(T arr[], size_t length, string prompt)
{
	cout << prompt << (prompt.size() == 0 ? "" : " :: \t");
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>
void quickSorted(T arr[], int left, int right)
{
	int tmp_l = left;
	int tmp_r = right;
	T pivot = arr[left];

	while (left < right)
	{
		while (pivot < arr[right] and left < right) right--;
		if (left != right)
		{
			arr[left] = arr[right];
			left++;
		}
		while (pivot > arr[left] and left < right) left++;
		if (left != right)
		{
			arr[right] = arr[left];
			right--;
		}
	}
	arr[left] = pivot;
	int index = left;

	left = tmp_l;
	right = tmp_r;

	if (index > left)
	{
		quickSorted(arr, left, index - 1);
	}
	if (index < right) {
		quickSorted(arr, index + 1, right);
	}


}

template<typename T>
int binarySearch(T arr[], int left, int right,T value)
{
	if (left > right) return -1;

	int middle = (left + right) / 2;

	if (arr[middle] == value) return middle;

	if (value < arr[middle])
		binarySearch(arr, left, middle - 1, value);
	else if (value > arr[middle])
		binarySearch(arr, middle + 1, right, value);
}
