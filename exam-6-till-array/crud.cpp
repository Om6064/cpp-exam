#include<iostream>
 
using namespace std;
 
int main(){
  int ch,size,idx=0;

  cout << "enter the size : ";
  cin >> size;

  int arr[size];

  do
  {
    cout <<endl<< "enter the choise : ";
    cin >> ch;

    switch (ch)
    {
    case 1:
    if (idx >= size)
    {
        cout << "array overflow...";
        break;
    }
    int v;

    cout << "enter the value : ";
    cin >> v;

    arr[idx]=v;
    idx++;
    
        
        break;
    case 2:
        for (int val : arr)
        {
            cout << val;
        }
        
        break;
    case 3:
        int index,value;

        cout << "enter the index you wanna update : ";
        cin >> index;

        cout << "enter the value you wanna update : ";
        cin >> value;

        arr[index] = value;
        cout << "your updated value is "<<value;
        break;
    case 4:
        int vaa;
    idx--;
    vaa = arr[idx];
    arr[idx]=0;
    cout << "your deleted value is "<< vaa;
        
        break;
    case 5:
        cout << "exit";
        break;
    
    default:
        cout << "invalid input : ";
        break;
    }
  } while (ch != 5);
  
    return 0;
}