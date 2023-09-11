#include<iostream>
using namespace std;
int induniq(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={1,2,3,3,1};
    cout<<induniq(arr,5);
    
}
