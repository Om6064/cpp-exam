#include<iostream>
 
using namespace std;
 
int main(){
 for (int i = 1; i <= 5; i++)
 {
    for (int j = 1; j <= 5; j++)
    {
        if ((j == 1 && i<=5) || (i == 1 && j<=5) || (i == 3 && j <=5) || (j == 5 && i <= 3 ))
        {
            cout << "* ";
        }
        else{
            cout << "  ";
        }
        
        
    }
    cout << endl;
    
 }
 
    return 0;
}