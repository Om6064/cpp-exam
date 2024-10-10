#include<iostream>
 
using namespace std;
 
int main(){
 int number;
 cout << "enter your number : ";
 cin >> number;

 if (number == 0) cout << "number is Neutral ";
 else if (number > 0) cout << "number is Positive ";
 else cout << "number is Negative ";
 
 
    return 0;
}