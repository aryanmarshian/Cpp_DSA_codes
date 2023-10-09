#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void sortone(int arr[],int n){
    int left =0,right=n-1;
    while(left<right){
        cout<<endl;
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }       
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    printarray(arr,8);
    cout<<endl;
}

int main(){
    int arr[8]={0,0,1,1,0,1,0,1};

    sortone(arr,8);
    printarray(arr,8);
}