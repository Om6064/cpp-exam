// count it at last if it is wrong so don't count it

#include<iostream>
 
using namespace std;
 
int main(){
 int a,b,c;

 cout << "ENTER THREE NUMBERS : ";
 cin >> a >> b >> c ;

 if ((a == b) && (b == c))
 {
    cout << "ALL ARE SAME";
    return 0;
 }

 
if (a == b) cout << "A and B are same";
if (a == c) cout << "A and C are same";
if (b == c) cout << "B and C are same";
 

 if ((a > b) && (a > c))
 {
    cout << "A is Greatest";
 }
 else if ((b > c) && (b > a))
 {
    cout << "B is Greatest";
 }
 else
 {
    cout << "C is Greatest";
 }
 

    return 0;
}