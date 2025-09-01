#include <iostream>
using namespace std;


int main()
{
    // - однорядковий коментар
    /* - багаторядковий коментар*/

    /*cout << "He\bllo\a World!\n";
    cout << "I \t \\LOVE\\ \"C++\" ";

    cout << endl << endl;

    cout << "I \t\t\t   I" << endl;
    cout << "\tLOVE \t LOVE" << endl;
    cout << "\t     C++ " << endl;

    cout << endl << endl;

    cout << R"(
        I                         I
            LOVE           LOVE
                    C++ 
    )";*/

    // type name = value

    int number_1 = { 10 };
    cout << "Number :: " << number_1 << endl;

    double a, b, c;
    ////number_1 = { 10.9 };
    //cout << "Number :: " << number_1 << endl;

    a = 2.8;
    b = 3.5;
    c = 5.5;

    cout << "A,B,C --> " << a << " , " << b << " , " << c << endl;

    bool flag = true;
    char symbol = 'A';
    int symbol_2 = { 'A' };

    cout << "INT    :: " << number_1 << "\t size :: " << sizeof(number_1) << " bytes" << endl;
    cout << "DOUBLE :: " << a << "\t size :: " << sizeof(a) << " bytes" << endl;
    cout << "BOOL   :: " << boolalpha << flag << "\t size :: " << sizeof(flag) << " bytes" << endl;
    cout << "CHAR   :: " << symbol << "\t size :: " << sizeof(symbol) << " bytes" << endl;

    cout << " \n\n ================================================ \n\n";

    short number = 32767;
    cout << "Short number :: " << number << endl;
    number = 32769;
    cout << "Short number :: " << number << endl;


    cout << (number_1 + a + flag + symbol) << endl;

    // int + double + bool + char
    // double + bool 
    // double + char --> double

    // +, -, *, /, %

    cout << (double)number_1 / 4 << endl; // 2.5
    cout << number_1 / 4.0 << endl; // 2.5
    cout << (int)symbol<< endl; // 2.5
    cout << boolalpha << (bool)0.2 << endl;

    int a_1 = 5, b_1 = 3;

    cout << " \n\n ================================================ \n\n";
    cout << a_1 << " + " << b_1 << " = " << (a_1 + b_1) << endl; // 8
    cout << a_1 << " - " << b_1 << " = " << (a_1 - b_1) << endl; // 2
    cout << a_1 << " * " << b_1 << " = " << (a_1 * b_1) << endl; // 15
    cout << a_1 << " / " << b_1 << " = " << ((double)a_1 / b_1) << endl; // 1.6..
    cout << a_1 << " % " << b_1 << " = " << (a_1 % b_1) << endl; // 2

    const double PI = 3.14;
    cout << PI << endl;
    //PI = 2.35;
}
