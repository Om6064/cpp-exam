#include<iostream>
 
using namespace std;
 
int main(){
 int ch;
 cout << " enter your number accordingly day like 1 for monday : ";
 cin >> ch;

 switch (ch)
 {
 case 1:
    cout << "Monday";
    break;
 case 2:
    cout << "Tuesday";
    break;
 case 3:
    cout << "Wednesday";
    break;
 case 4:
    cout << "Thusday";
    break;
 case 5:
    cout << "Friday";
    break;
 case 6:
    cout << "Saturday";
    break;
 case 7:
    cout << "Sunday";
    break;
 
 default:
    cout << "invalid input !";
    break;
 }
    return 0;
}