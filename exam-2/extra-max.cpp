// i know this code is not do to max method but i do it

#include<iostream>
 
using namespace std;
 
int main(){
 int a,b,c,max;

 cout << "ENTER THREE NUMBERS : ";
 cin >> a >> b >> c ;

 max = a;

if (a == b) cout << "A and B are same";
if (a == c) cout << "A and C are same";
if (b == c) cout << "B and C are same";




 if (max <= a) max = a;    
 if (max <= b) max = b;    
 if (max <= c) max = c;    
     
cout << "maximum number is : "<<max;
 
    return 0;
}