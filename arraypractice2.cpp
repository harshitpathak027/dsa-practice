#include <iostream>
using namespace std;

//input array
int inputarray(int arr[],int n){
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
}

//traverse an array
int traverse(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int insert(int arr[],int n,int x,int size,int pos){
    if(size == x){
        return n;
    }
    int index = pos-1;
    for(int i = n-1;i>=index;i--){
        arr[i+1] = arr[i];

    }
    arr[index] =x;
}

int main(){
    int size;
    cout<<"enter the size of array ";
    cin>>size;
    int pos,x;
    cout<<"enter the position ";
    cin>>pos;
    int n = 5;
    cout<<"enter the element you want to insert ";
    cin>>x;
    int arr[n] = {1,2,3};

    insert(arr,n,x,size,pos);
    traverse(arr,n);
}