#include <iostream>
using namespace std;


int factorial(int number)
{
    if (number == 1 or number == 0) return 1;
    return number * factorial(number - 1);
}



int main()
{
    /*
    *   n! = n * (n-1)!
        5! = 5 * 4!
        4! = 4 * 3!
        3! = 3 * 2!
        2! = 2 * 1!
        1! = 1
        0! = 1
    */
    int number;
    cout << "Enter number :: ";
    cin >> number;

    cout << "5! = " << factorial(5) << endl;
    cout << "5! = " << factorial(6) << endl;
    cout << "5! = " << factorial(7) << endl;
    cout << "5! = " << factorial(number) << endl;
}
