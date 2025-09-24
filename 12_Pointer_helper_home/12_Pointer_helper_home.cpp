#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    /*Завдання 3
        Використовуючи два покажчики на масиви цілих чисел, скопіювати один масив в інший так, щоб у другому масиві елементи перебували у зворотному порядку.
        Використовувати в програмі арифметику покажчиків для просування масивом, а також оператор розіменування.*/
    const int SIZE = 5;
    int arr[SIZE]{ 1,2,3,4,5 };
    int arr2[SIZE]{};


    /*int i = 0, j = SIZE - 1;

    while (i < SIZE)
    {
        arr2[i] = arr[j];
        i++;
        j--;
    }*/

    //int i = 0, j = SIZE - 1;

    //while (i < SIZE)
    //{
    //    *(arr2 + i)  = *(arr + j);
    //    i++;
    //    j--;
    //}

    int* ptr_start = arr2;
    int* end_ptr = arr + SIZE - 1;

    for (size_t i = 0; i < SIZE; i++)
    {
        *ptr_start = *end_ptr; 
        ptr_start++;
        end_ptr--;
    }

    for (size_t i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << arr2[i] << "\t";
    }
    cout << endl;
}
