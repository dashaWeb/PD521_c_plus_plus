#include <iostream>
using namespace std;

const double PI = 3.14;

void showMessage(int age, string name = "None")
{
    if (age < 16)
        return;

    cout << "Hello, " << name << endl;
    

   /* if (age >= 16)
        cout << "Hello, " << name << endl;
    else
        cout << "Exit! " << name << endl;*/
}

int sum(int a, int b)
{
    /*int summ = a + b;
    return summ;*/
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

double divi(int a, int b)
{
    if (b == 0)
        return 0;
    return (double)a / b;
    // double / int => double
}

double calculate(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return sum(a, b);
    case '-':
        return sub(a, b);
    case '*':
        return mult(a, b);
    case '/':
        return divi(a, b);
    }
    return 0;
}

int main()
{
    //showMessage("Olia", 18); // () - Invoke    
    //showMessage("Pavlo",14);

    //int res = sum(5, 7);
    //int numb_1, numb_2;
    //cout << "Enter two number :: ";
    //cin >> numb_1 >> numb_2;
    ////cout << "Sum  :: " << res << endl;
    //cout << "Sum  :: " << numb_1 << " + " << numb_2 << " = " << sum(numb_1, numb_2) << endl;
    //cout << "Sub  :: " << numb_1 << " - " << numb_2 << " = " << sub(numb_1, numb_2) << endl;
    //cout << "Mult :: " << numb_1 << " * " << numb_2 << " = " << mult(numb_1, numb_2) << endl;
    //cout << "Div  :: " << numb_1 << " / " << numb_2 << " = " << divi(numb_1, numb_2) << endl;

    //int a, b;
    //char op;
    //while (true)
    //{
    //    cout << "Enter a mathematical expression :: "; // 2 + 2
    //    cin >> a >> op >> b;
    //    if (op != '+' and op != '-' and op != '*' and op != '/')
    //        break;
    //    cout << a << " " << op << " " << b << " = " << calculate(a, b, op) << endl;

    //}

    showMessage(18);
    showMessage(18, "Olia");

    /*
    ====
    ====
    ====
    ====
    ====
    */
}

