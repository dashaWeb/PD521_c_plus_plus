
#include "library.h"
#include <ctime>
using namespace std;

int main()
{

	// new 
	// delete
	srand(time(0));
	/*int* ptr_int = new int;

	int size;
	cout << "Enter size array :: ";
	cin >> size;
	int* ptr = new int[size];


	for (size_t i = 0; i < size; i++)
	{
		ptr[i] = rand() % 10 + 1;
	}

	for (size_t i = 0; i < size; i++)
	{
		cout << ptr[i] << "\t";
	}cout << endl;

	delete [] ptr;*/

	/*int i = 1;
	while (true)
	{
		long long* ptr = new long long[1000000];
		cout << "block #" << i++ << endl;
	}*/

	int size = 5;
	int* arr = createArray(size);

	fillArray(arr, size);
	printArray(arr, size, "Print Array Create        ");

	pushBack(arr, size, 33);

	printArray(arr, size, "Print Array after pushBack");
	cout << size << endl;

	cout << endl;
	popFront(arr, size);
	printArray(arr, size, "Print Array after popFront");

	cout << endl;
	insert(arr, size, 22, 2);
	printArray(arr, size, "Print Array after insert  ");

	cout << endl;
	pushFront(arr, size, 777);
	printArray(arr, size, "Print Array after pushFront");


	cout << endl;
	popBack(arr, size);
	printArray(arr, size, "Print Array after popBack ");


	cout << endl;
	remove(arr, size, 2);
	printArray(arr, size, "Print Array after remove  ");

	/*deleteArray(arr);
	if (arr != nullptr)
		printArray(arr, size, "Print Array after delete  ");
	else
		cout << "Array is empty" << endl;*/


}

