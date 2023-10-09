#include<iostream>
using namespace std;
void swaparr(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size)
        swap(arr[i],arr[i+1]);
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int arr2[7]={1,2,3,4,5,6,7};
    swaparr(arr,6);
    swaparr(arr2,7);
    printarr(arr,6);
    printarr(arr2,7);

    return 0; 
}