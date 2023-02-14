#include<iostream>
using namespace std;

int secondlargest(int arr[],int n){
    int second = -1,largest = 0;
    for(int i =1;i<n;i++){
     if(arr[i]>arr[largest]) {
        second = largest;
        largest = i;
     }
     else if(arr[i]!=arr[largest]){
        if(second==-1||arr[i]>arr[largest]){
            second = i;
        }
     }

    }
    return arr[second];
}

int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    cout<<secondlargest(arr,n);
}