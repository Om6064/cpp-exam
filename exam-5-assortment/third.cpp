#include <iostream>

using namespace std;

int main()
{
    int row, cols;

    cout << "enter the row of an array : ";
    cin >> row;

    cout << "enter the column of an array : ";
    cin >> cols;

    int arr[row][cols];
    int arr2[row][cols];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter the element of an array at postion [" << i << "]" << "[" << j << "] : ";
            cin >> arr[i][j];
        }
    }


     for (int i = 0; i < row; i++)
     {
      for (int j = 0; j < cols; j++)
      {
           arr2[i][j]=arr[j][i];
           cout << arr2[i][j] <<" ";
      }
      cout << endl;
      
     
     }
     

   

    return 0;
}