#include <iostream>
using namespace std;

int largest(int arr[],int n){
    int max = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int secondlargest(int arr[],int n){
    int res = -1;
    int largests = largest(arr,n);
    for(int i = 0;i<n;i++){
        if(arr[i]!= largests){
            if(res ==-1){
                res = i;
            }
            else if(arr[i]>arr[res]){
                res = i;
            }
        }
    }
    return arr[res];
}

int main(){
    int n = 5;
    int arr[n] = {1,2,8,4,5};
    cout<<largest(arr,n)<<" ";
    cout<<secondlargest(arr,n);
}