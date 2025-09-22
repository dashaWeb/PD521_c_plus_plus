#include <iostream>
#include <ctime>
using namespace std;


//void Swap(int* one, int* two)
//{
//    int tmp = *one;
//    *one = *two;
//    *two = tmp;
//}



void Swap(int& one, int& two)
{
    int tmp = one;
    one = two;
    two = tmp;
}

void fillArray(int* arr, size_t length, int min = 1, int max=10)
{
    for (size_t i = 0; i < length; i++)
    {
        arr[i] = min + rand() % (max - min + 1);
    }
}

void printArray(int* arr, size_t length)
{
    for (size_t i = 0; i < length; i++)
    {
        cout << *arr++ << "\t";
    }
    cout << endl;
}

void reverseArray(int* arr, size_t length)
{
    int* ptr = arr + length - 1;
    for (size_t i = 0; i < length; i++)
    {
        cout << *ptr-- << "\t";
    }cout << endl;
}

void min_max(int* arr, size_t length, int& max, int& min)
{
    max = *arr;
    min = *arr;

    for (size_t i = 0; i < length; i++)
    {
        if (max < *arr)
            max = *arr; 
        if (min > *arr)
            min = *arr;

        arr++;
    }

}
int main()
{

    srand(time(0));

    int a = 5, b = 7;
    int* pointer_a = &a;
    cout << "main address a :: " << pointer_a << "\t value :: " << *pointer_a << endl;
    cout << "A :: " << a << "\t B :: " << b << endl;
    Swap(a,b);
    cout << "A :: " << a << "\t B :: " << b << endl;
    const int SIZE = 10;
    int arr[SIZE]{};
    int* ptr_arr = arr;
    fillArray(arr, SIZE);
    printArray(arr, SIZE);
    cout << "Reversed Array :: ";
    reverseArray(arr, SIZE);
    int min, max;
    min_max(arr, SIZE, max, min);
    cout << "Min :: " << min << "\t Max :: " << max << endl;
    /*cout << "Address :: " << ptr_arr << "\t Value :: " << *ptr_arr << endl;
    cout << "Address :: " << ptr_arr + 1 << "\t Value :: " << *(ptr_arr + 1)<< endl;
    cout << "Address :: " << ptr_arr + 1 << "\t Value :: " << *(ptr_arr + 1)<< endl;
    cout << "Address :: " << ptr_arr + 2 << "\t Value :: " << *(ptr_arr + 2)<< endl;
    cout << "Address :: " << ptr_arr + 3 << "\t Value :: " << *(ptr_arr + 3)<< endl;
    cout << "Address :: " << ptr_arr - 4 << "\t Value :: " << *(ptr_arr - 4)<< endl;
    cout << "Address :: " << ptr_arr + 22 << "\t Value :: " << *(ptr_arr +30)<< endl;*/


}

