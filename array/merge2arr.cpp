#include<iostream>
using namespace std;
void merge(int arr1[],int arr2[],int arr3[],int n , int m){
    int k =0;
    int i=0;
    int j=0;
    while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                arr3[k]=arr1[i];
                k++;
                i++;
            }
            else {
                arr3[k]=arr2[j];
                j++;
                k++;
            }

    }
    while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        arr3[k]=arr1[j];
        j++;
        k++;
    }

}
int main(){
    int arr1[5]={2,4,6,7,9};
    int arr2[3]={3,5,8};
    int k;
    int arr3[k];
    merge(arr1,arr2,arr3,5,3);
    for(int i=0;i<=8;i++){
        cout<<arr3[i]<<endl;

    }
}