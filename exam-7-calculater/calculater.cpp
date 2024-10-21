#include <iostream>

using namespace std;

int add(int, int);
int sub(int, int);
int mul(int, int);
int divi(int, int);
int mod(int, int);

int main()
{
    int ch, a, b;

    cout << "enter the  nums : ";
    cin >> a >> b;

    do
    {

        cout << "Press 1 for + " << endl;
        cout << "Press 2 for - " << endl;
        cout << "Press 3 for * " << endl;
        cout << "Press 4 for / " << endl;
        cout << "Press 5 for % " << endl;
        cout << "Press 0 for the exit" << endl;

        cout << "enter your choice" << endl;
        cin >> ch;

        switch (ch)
        {
        case 0:
            cout << "thank you!!";
            break;
        case 1:
            cout << "addition of " << a << " and " << b << " = " << add(a, b) << endl;
            break;
        case 2:
            cout << "subtraction of " << a << " and " << b << " = " << sub(a, b) << endl;
            break;
        case 3:
            cout << "multiplication of " << a << " and " << b << " = " << mul(a, b) << endl;
            break;
        case 4:
            cout << "div of " << a << " and " << b << " = " << divi(a, b) << endl;
            break;
        case 5:
            cout << "modular of " << a << " and " << b << " = " << mod(a, b) << endl;
            break;

        default:
            cout << "invalid number";
            break;
        }
    } while (ch != 0);

    return 0;
}

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int sub(int a, int b)
{
    int c;
    c = a - b;
    return c;
}
int mul(int a, int b)
{
    int c;
    c = a * b;
    return c;
}
int divi(int a, int b)
{
    int c;
    c = a / b;
    return c;
}
int mod(int a, int b)
{
    int c;
    c = a % b;
    return c;
}
