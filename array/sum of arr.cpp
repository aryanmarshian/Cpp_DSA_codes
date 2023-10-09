#include<iostream>
using namespace std;
int sumofarr(int arr[],int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=arr[i]+sum;

    }
    return sum;

}
int main(){
    int arr[3]={1,2,3};

    for(int i=0;i<=3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"sum of arr "<<sumofarr(arr,3)<<endl;
}