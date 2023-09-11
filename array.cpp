#include<iostream>
using namespace std;
void printarray(int arr[], int size){
    cout<<"print the array"<<endl;
    for(int i;i<size;i++){
        cout<<arr[i]<<",";
    }
    cout<<"print done"<<endl;
}

 int main(){
    int numb [15];
    cout<<numb[6]<<endl;
    cout<<numb[9]<<endl;
    cout<< "we chillin"<<endl;

    int arr[25]={3,7,6};
    int n=25;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    printarray(numb,12);
    printarray(arr,25); 


    
    return 0;
 }