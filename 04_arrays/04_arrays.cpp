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
        bool flag = true;
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


    string colors[]{ "red","green","purple" };
    for (size_t i = 0; i < 3; i++)
    {
        cout << colors[i] << endl;
    }
   /* for (size_t i = 0; i < 3; i++)
    {
        cin >> colors[i];
    }*/
    /*double arr3[5];
    for (size_t i = 0; i < 5; i++)
    {
        cout << "Enter value :: ";
        cin >> arr3[i];
    }*/



    string months[]{"January","February","March","April" ,"May" ,"June" ,"July" ,"August" ,"September" ,"October","November","December"};
    const int SIZE_2 = 12;
    double price[SIZE_2]{};

    for (size_t i = 0; i < SIZE_2; i++)
    {
        //cout << "Enter value ["<<months[i]<<"] :: ";
        //cin >> price[i];
        price[i] = rand() % 1000;
    }

    for (size_t i = 0; i < SIZE_2; i++)
    {
        cout << price[i] << "\t";
    }cout << endl;

    double max = price[0];
    double min = price[0];
    int index_min = 0;
    int index_max = 0;
    for (size_t i = 0; i < SIZE_2; i++)
    {
        if (max < price[i])
        {
            max = price[i];
            index_max = i;
        }
            
        if (min > price[i])
        {
            min = price[i];
            index_min = i;
        }
    }
    cout << "Min :: " << min  << "\t " << months[index_min] << endl;
    cout << "Max :: " << max << "\t" << months[index_max] << endl;
}
