#include<iostream>
using namespace std;

int search_first(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){
        if(k==arr[mid]){
            ans=mid;
            end=mid-1;

        }
        if(k>arr[mid]){
            start = mid+1;
        }
        if(k<arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}

int search_last(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){
        if(k==arr[mid]){
            ans=mid;
            start=mid+1;

        }
        if(k>arr[mid]){
            start = mid+1;
        }
        if(k<arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}


int main(){
    int even[11]={0,1,1,1,1,2,2,2,2,2,3};
    cout<<"first occurence "<<search_first(even,11,2)<<endl;
    cout<<"last occurence  "<<search_last(even,11,2)<<endl;

    return 0;
}
