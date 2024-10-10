#include<iostream>
 
using namespace std;
 
int main(){
    float w,h;

    cout << "enter value of weight  : ";
    cin >> w;

    cout << "enter value of height  : ";
    cin >> h;

    cout << "total body mass index is : "<< (w/(h*h));
    return 0;
}