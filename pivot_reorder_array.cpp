#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n;
    int mid=(e+s)/2;
    while(s<=e){
        if(arr[mid-1]>arr[mid]){
            return mid;
        }
        if(arr[mid-1]<arr[mid]){
            e=mid-1;
        }
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
    }
    return 0;
}
int main(){
    int numb[7]={6,7,8,1,2,3,4};
    cout<<"pivot index "<<pivot(numb,7)<<endl;

}