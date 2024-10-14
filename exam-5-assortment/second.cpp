#include <iostream>

using namespace std;

int main()
{
    int size,max=0;
    

    cout << "enter the size of an array : ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter the size of an array an postion " << i << " : ";
        cin >> arr[i];
    }
    

    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
             max = arr[i];
        }
    }
    cout <<"largest element is : "<<max;

    return 0;
}