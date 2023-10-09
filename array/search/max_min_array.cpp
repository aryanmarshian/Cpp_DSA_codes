#include<iostream>
using namespace std;
int getmax(int arr[],int n){
    int max = INT_MIN;
    for(int i=0;i<=n;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int getmin(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int j;j<size;j++){
        cin>>arr[j];
    }
    cout<<"max is "<<getmax(arr,size)<<endl;
    cout<<"min is "<<getmin(arr,size)<<endl;
    return 0;
}