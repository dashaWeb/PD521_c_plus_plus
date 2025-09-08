#include <iostream>
#include <ctime>
using namespace std;


int main()
{
    srand(time(0));

    //const int SIZE = 10;
    //int arr[SIZE];
    //for (size_t i = 0; i < SIZE; i++)
    //{
    //    //arr[i] = rand() % 10 + 1; // [1, 10]
    //    //arr[i] = rand() % (15 + 1) + 5; // [5, 20] // 0 ... 14 [5,20] 
    //    // min + rand() % (max - min +1);
    //    
    //    arr[i] = 5 + rand() % (20 - 5 + 1);
    //    cout << arr[i] << "\t";
    //}cout << endl;
    

    //int arr[10]{ 1,2,3,4,5,6,7,8,9,7};
    int arr[]{1,4,7,8,5,4,6,5,4,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array size :: " << size << endl;
    cout << "Print array :: ";
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    cout << "Reverse array :: ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    const int SIZE = 10;
    int arr2[SIZE]{};

    // fill array
    for (size_t i = 0; i < SIZE; )
    {
        int flag = true;
        int number = rand() % 10 + 1; // [1,10]

        for (size_t j = 0; j < i; j++)
        {
            if (arr2[j] == number) {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            arr2[i] = number;
            i++;
        }
    }

    cout << "\nPrint array 2 :: ";
    for (size_t i = 0; i < size; i++)
    {
        cout << arr2[i] << "\t";
    }
    cout << endl;
}
