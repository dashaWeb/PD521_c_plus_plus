#include <iostream>
#include <ctime>
using namespace std;


template <typename T, size_t COL>
void fillArray(T arr[][COL], size_t row, size_t col, int min = 1, int max = 10);

template <typename T, size_t COL>
void printArray(T arr[][COL], size_t row, size_t col, string prompt = "");


int main()
{
    srand(time(0));
    const int row = 3, col = 5;
    int arr[row][col];
    fillArray(arr, row, col);
    printArray(arr, row, col);
}








template<typename T, size_t COL>
void fillArray(T arr[][COL], size_t row, size_t col, int min, int max)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            arr[i][j] = min + rand() % (max - min + 1);
        }
    }
}

template<typename T, size_t COL>
void printArray(T arr[][COL], size_t row, size_t col, string prompt)
{
    cout << (prompt.size() > 0 ? prompt + " :: \n" : "");
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}


