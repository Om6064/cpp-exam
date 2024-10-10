#include<iostream>
 
using namespace std;
 
int main(){
 int n1,n2,ch;

 cout << "ENTER YOUR BOTH NUMBER ";
 cin >> n1 >> n2;

 cout << "enter your choise";
 cin >> ch;

 if (ch == 1) cout << (n1 + n2);
 else if (ch == 2) cout << (n1 - n2);
 else if (ch == 3) cout << (n1 * n2);
 else if (ch == 4) cout << (n1 / n2);
 else cout << "invaild choice!";
 
 
    return 0;
}