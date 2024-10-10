#include<iostream>
 
using namespace std;
 
int main(){
    float c;
    cout << "enter the value of Celsius : ";
    cin >> c;

    cout << "temprature in Fahrenheit  is : "<<(1.8 * c)+32;
    
    return 0;
}