#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=0;i<=n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }

        }
        arr[j+1]=temp;
    }

}

int main(){
    int arr[6]={23,11,54,15,87,65};
    insertionsort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}