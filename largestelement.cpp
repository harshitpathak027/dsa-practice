#include <iostream>
using namespace std;

int largestelement(int arr[],int n){
    int max  = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;

}

int secondlargest(int arr[],int n){
    int largest = largestelement(arr,n);
    int res = -1;
    for(int i = 0;i<n;i++){
        if(arr[i]!=largest){
            if(res == -1){
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
    int n =5;
    int arr[n] = {34,5,62,2,98};
    cout<< largestelement(arr,n)<<" "; 
    cout<<secondlargest(arr,n);

}