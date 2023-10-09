#include<iostream>
using namespace std;
int pivotnumber(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    int totalsum=0;
    for(int i=0;i<=n;i++){
        totalsum=totalsum+arr[i];
    }
    while(s<=e){
        int firsthalf=0;
        for(int j=0;j<mid;j++){
            firsthalf=firsthalf+arr[j];
        }
        int secondhalf=totalsum-firsthalf-arr[mid];
        if(secondhalf==firsthalf){
            ans=mid;
        }
        if(secondhalf<=firsthalf){
            e=mid-1;
        }
        if(secondhalf>=firsthalf){
            s=mid+1;
        }
        mid=(s+e)/2;

    }
    return ans;

}
int main(){
    int list[7]={2,4,1,4,7,8,3};

    cout<<"number "<<pivotnumber(list,7)<<endl;
    return 0;
}