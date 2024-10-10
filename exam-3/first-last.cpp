#include<iostream>
 
using namespace std;
 
int main(){
 int num,r,ans=0,sum=0,first,last;

 cout << "enter the number : ";
 cin >> num;

//  while (num != 0)
//  {
//     r= num % 10;
//     ans = (ans * 10) + r;
//     if (num =num)
//     {
//       sum = r + r;
//     }
    
   
    
//  }
//  cout << "sum is : " << sum;

for (int i = 1; i < 2; i++)
{
       last = num % 10;
      num = num/10;
   
}
for (;num!=0;)
{
   first= num % 10;
   ans = (ans* 10) + first;
   num = num/10;
}
for (int i = 1; i < 2; i++)
{
       sum= num % 10;
      
   
}

cout << "sum is : " << first + last;

 
    return 0;
}
//576