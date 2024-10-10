#include<iostream>
 
using namespace std;
 
int main(){
    float a1,a2;
    cout << "enter the value of first angle : ";
    cin >> a1;
   
    cout << "enter the value of second angle : ";
    cin >> a2;

    cout << "third angle of triangle is : " << 180 - (a1+a2);


    return 0;
}