#include<iostream>
 
using namespace std;
 
int main(){
 int num;

 cout << "Enter the num : ";
 cin >> num;

 if (num == 0)cout << "number is  neutral (0)";
 
 else if (num < 0) cout << "number is  negative";

 else cout << "number is positive";
 
 
    return 0;
}