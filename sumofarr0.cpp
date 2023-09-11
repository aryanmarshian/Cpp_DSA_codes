#include<iostream>
#include<vector>
using namespace std;
int findsum(int n ,int arr[]){
    int ans=0;
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i]+arr[j]==0)
            ans=arr[i];
            
        }
    }
    return ans;
}
int main(){
    int arr[7]={6,1,3,2,5,-6,7};
    cout<<findsum(7,arr);
}