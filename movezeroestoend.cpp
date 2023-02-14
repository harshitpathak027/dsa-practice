#include <iostream>
using namespace std;

int traverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void zee(int arr[],int n){
    int count = 0;
    for(int i= 0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

void movezeroes(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
}

int main()
{
    int n = 5;
    int arr[n] = {0, 3, 0, 0, 2};
    traverse(arr, n);
    cout << "\n";
    zee(arr, n);
    traverse(arr, n);
}
