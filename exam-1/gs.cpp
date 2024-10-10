#include <iostream>

using namespace std;

int main()
{
    float hra, da, ta, bs;

    cout << "enter the value of basic salary : ";
    cin >> bs;

    hra = bs * 0.10;
    da = bs * 0.05;
    ta = bs * 0.08;

    cout << "value of hra is : " << hra << endl;
    cout << "value of da is : " << da << endl;
    cout << "value of ta is : " << ta << endl;

    cout << "gross salary is : " << (bs + hra + da + ta);

    return 0;
}