#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-j;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                }
        }    
    }
}
int main(){
    int arr[5]={45,23,12,34,19};
    int n=5;
    bubblesort(arr,5);
    for(int i;i<=n;i++){
        cout<<arr[i]<<endl;
    }
}