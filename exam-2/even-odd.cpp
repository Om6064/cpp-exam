#include<iostream>
 
using namespace std;
 
int main(){
 int number;

 cout << "enter the number : ";
 cin >> number;

 number%2 == 0 ? cout << " it's even" : cout << "it's odd";
    return 0;
}