#include<iostream>
 
using namespace std;
 
int main(){
 int num;
 bool flag =true;

 cout << "enter a  number";
 cin >> num;

    for (int i = 2; i*i < num; i++)
    {
        if (num % i == 0)
        {
            flag = false;
           cout << "its not prime number"; 
           return 0;
        }
        
    }
    if (flag)
    {
        cout << "its a prime number";
    }
    
    

    return 0;
}