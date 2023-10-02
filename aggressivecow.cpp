#include<iostream>
using namespace std;

bool ispossiblle(int stalls[], int k,int mid,int n){
    int cowcount =1;
    int lastpos =stalls[0];

    for(int i=0;i<n;i++){
        if(stalls[i]-lastpos>=mid){
            cowcount++;
            if(cowcount==k){
                return true;
            }
            lastpos=stalls[i];
        }
    }
    return false;
}

int aggressiveCows(int stalls[], int k,int n)
{
    int s=0;
    int maxi =-1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int ans =-1;
    int mid = s+ (e-s)/2;

    while(s<=e){
        if(ispossiblle(stalls,k,mid,n)){
            ans=mid;
            s=mid+1;

        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[6]={23,31,22,11,2,65};
    int ans =aggressiveCows(arr,3,6);
    cout<<ans;
}