#include<iostream>
 
using namespace std;
 
int main(){
 int num,r,ans=0;

 cout << "Enter the num : ";
 cin >> num;

 int temp = num;

 while (num != 0)
 {
    r = num%10;
    ans = (ans * 10)+r;
    num = num/10;
 }
 

 if (temp == ans)
 {
    cout << " number is palindrome";
 }else{
    cout << " number is not palindrome";
 }
 
  
    return 0;
}