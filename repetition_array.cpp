#include<iostream>
#include<vector>
using namespace std;
int finddup(int n ,int arr[]){
    int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    cout<<finddup(7,arr);
}