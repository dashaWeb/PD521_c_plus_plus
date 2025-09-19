#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	//const int row = 4, col = 5;

	//int arr[row][col]{};

	/*int arr[][col]
	{
		{1,2,34},
		{4,5,6,4},
		{1,7,8}
	};*/

	//int arr[row][col]{};

	/*arr[0][0] = rand() % 20 + 1;
	arr[0][1] = rand() % 20 + 1;
	arr[0][2] = rand() % 20 + 1;
	arr[0][3] = rand() % 20 + 1;
	arr[0][4] = rand() % 20 + 1;*/

	/*for (size_t i = 0; i < col; i++)
	{
		arr[0][i] = rand() % 20 + 1;
	}
	for (size_t i = 0; i < col; i++)
	{
		arr[1][i] = rand() % 20 + 1;
	}
	for (size_t i = 0; i < col; i++)
	{
		arr[2][i] = rand() % 20 + 1;
	}
	for (size_t i = 0; i < col; i++)
	{
		arr[3][i] = rand() % 20 + 1;
	}*/

	//// fill array
	//for (size_t j = 0; j < row; j++)
	//{
	//    for (size_t i = 0; i < col; i++)
	//    {
	//        arr[j][i] = rand() % 20 + 1;
	//    }
	//}

	//// print array
	//for (size_t j = 0; j < row; j++)
	//{
	//    for (size_t i = 0; i < col; i++)
	//    {
	//        cout << arr[j][i] << "\t";
	//    }
	//    cout << endl;
	//}
	/*const int block = 3, row = 3, col = 4;
	int arr[block][row][col]{};
	for (size_t i = 0; i < block; i++)
	{
		for (size_t j = 0; j < row; j++)
		{
			for (size_t q = 0; q < col; q++)
			{
				arr[i][j][q] = rand() % 20 + 1;
				cout << arr[i][j][q] << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}*/

	//int mas[][][]{
	//	{
	//		{
	//			{1,2,3,4},
	//			{4,5,6,7},
	//			{7,8,5}
	//		},
	//		{
	//			{1,2,3,4},
	//			{4,5,6,7},
	//			{7,8,5}
	//		},
	//		{
	//			{1,2,3,4},
	//			{4,5,6,7},
	//			{7,8,5}
	//		}
	//	},

	//}
	const int row = 4, col = 5;

	int arr[row][col]{};
	// fill array
	for (size_t j = 0; j < row; j++)
	{
		for (size_t i = 0; i < col; i++)
		{
			arr[j][i] = rand() % 5 + 1;
		}
	}

	// print array
	for (size_t j = 0; j < row; j++)
	{
		for (size_t i = 0; i < col; i++)
		{
			cout << arr[j][i] << "\t";
		}
		cout << endl;
	}

	int sum = 0;
	int min = arr[0][0];
	int max = arr[0][0];
	for (size_t j = 0; j < row; j++)
	{
		for (size_t i = 0; i < col; i++)
		{
			sum = sum + arr[j][i];
			if (max < arr[j][i]) max = arr[j][i];
			if (min > arr[j][i]) min = arr[j][i];
		}
	}

	cout << "Sum :: " << sum << endl;
	cout << "Average :: " << (double)sum / (row * col) << endl;
	cout << "Min :: " << min << endl;
	cout << "Max :: " << max << endl;
}

