#include<iostream>
 
using namespace std;
 
int main(){
 int a,b,c;

 cout << "enter the value of a : ";
 cin >> a;

 cout << "enter the value of b : ";
 cin >> b;

 cout << "enter the value of c : ";
 cin >> c;

if (a > b)
{
    if (a > c)
    {
        cout << a << "is a gratest";
    }
    
}

if (b > c)
{
    if (b > a)
    {
        cout << b << "is a gratest";
    }
    
}
if (c > a)
{
    if (c > b)
    {
        cout << c << "is a gratest";
    }
    
}

 
    return 0;
}