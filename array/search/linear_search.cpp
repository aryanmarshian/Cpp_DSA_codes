#include<iostream>
using namespace std;
 int main(){
    int key;
    cin>>key;
    int arr[10]={3,4,5,6,7,8,54,63,2,1};
    for(int i=0;i<=10;i++){
        if(arr[i]==key){
            cout<<"key is found"<<endl;
        }
        else{
            cout<<"key not found"<<endl;
        }
        
    }

 }