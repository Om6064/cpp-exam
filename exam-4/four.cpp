#include<iostream>
 
using namespace std;
 
int main(){
 for (int i = 1; i <= 5; i++)
 {
    for (int s = i; s > 1; s--)
    {
        cout << "  ";
    }
    
    for (int j = i; j<=5; j++)
    {
        cout << j%2 << " ";
    }
    cout << endl;
    
 }
 

    return 0;
}