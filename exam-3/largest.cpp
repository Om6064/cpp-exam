#include<iostream>
 
using namespace std;
 
int main(){
 int num,max=0,r;

 cout << "enter a number  : ";
 cin >> num;

 while (num !=0)
 {
    r = num % 10;
    if (r > max)
    {
        max = r;
    }
    num = num/10;
    
 }
 cout <<"Largest number is " << max;
 
    return 0;
}