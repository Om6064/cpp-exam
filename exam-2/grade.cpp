#include<iostream>
 
using namespace std;
 
int main(){
 int marks;
 cout << "enter your marks : ";
 cin >> marks;

 if (marks < 100)
 {
    if (marks >= 90) cout << "Grade A :";
    else if (marks >= 80) cout << "Grade B :";
    else if (marks >= 70) cout << "Grade C :";
    else if (marks >= 60) cout << "Grade D :";
    else if (marks >= 35) cout << "Grade E :";
    else cout << "Grade F : FAIL BETTER LUCK NEXT TIME!!";
}
 else{
    cout << "marks cannot be grater then 100";
 }
 
    return 0;
}