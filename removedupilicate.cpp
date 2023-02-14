#include<iostream>
using namespace std;
int removeduplicate(int arr[],int n){
    int res = 1;
    for(int i = 1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
        
    }
    return res;
}

int traverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int n = 5;
    int arr[n]= {1,1,2,2,3};
    int k= removeduplicate(arr, n);

    // Print updated array
    for (int i=0; i<k; i++)
        cout << arr[i] << " ";

    
}