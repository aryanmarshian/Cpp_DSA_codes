#include<iostream>
using namespace std;
int Binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
 int main(){
    int even[8]={2,3,5,6,8,9,12,34};
    int odd[7]={3,6,7,9,11,23,51};

    int evenindex = Binarysearch(even,8,9);
    int oddindex=Binarysearch(odd,7,23);

    cout<<oddindex<<endl;  
    cout<<evenindex<<endl;
    return 0;

 }