#include <iostream>
using namespace std;

int search(int arr[],int n,int x){
    for(int i = 0;i<n;i++){
        if(arr[i]==x){
            return i;
        }   
    }
    return -1;
}

int traverse(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
}

int insert(int arr[],int n ,int x,int pos)
{
    
    int index = pos -1;
    for(int i = n-1;i>=index;i--){
        arr[i+1] = arr[i];

    }
    arr[index]=x;
    return(n+1);
}

int main(){
    int x;
    cin>>x;
    int pos;
    cin>>pos;
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    
    insert(arr,n,x,pos);
    traverse(arr,n);
}