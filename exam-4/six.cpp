#include<iostream>
 
using namespace std;
 
int main(){
 for (int i = 1; i <= 5; i++)
 {
    for (int j = 1; j <= i; j++)
    {
        cout << j <<" ";
    }
   

    for (int s = i; s <= 4; s++)
    {
        cout << "    ";
    }
    for (int j = i; j >= 1; j--)
    {
        cout << j << " ";
    }
    cout << endl;
    
    
    
 }
 
    return 0;
}