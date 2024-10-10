#include<iostream>
 
using namespace std;
 
int main(){
 int start,end;

 cout << "enter a start year and end year";
 cin >> start >> end;

//  if (start = end)
//  {
//    cout << "its not valid input";
//    return 0;
//  }
 

 if (start > end)
 {
    start = start + end;
    end = start - end;
    start = start - end;
    
 }
 

 for (int i = start; i < end; i++)
 {
    if ((i % 4 == 0) && ((i % 100 != 0) || (i % 400 == 0)))
    {
        cout << i << " ";
    }
    // else{
    //     cout << "its not a leap year";
    // }
    
 }
 

   return 0;
}