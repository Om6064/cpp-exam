#include<iostream>
 
using namespace std;
 
int main(){
    float a,b,h;

    cout << "enter value of a : ";
    cin >> a;

    cout << "enter value of b : ";
    cin >> b;

    cout << "enter value of h : ";
    cin >> h;

    cout << " area of Trapezoid is : "<< (a + b / 2 * h);
    
    return 0;
}