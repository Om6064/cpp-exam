#include<iostream>
 
using namespace std;
 
int main(){
 int num;
 bool flag = true;



 cout << "Enter the num : ";
 cin >> num;

 for (int i = 2; i < num; i++)
 {
    if (num % i == 0)
    {
       flag = false;
        cout << "it is not a prime";
    }
    
 }
 if (flag)
 {
    cout << "it is a prime number";
 }
 
 
 
    return 0;
}