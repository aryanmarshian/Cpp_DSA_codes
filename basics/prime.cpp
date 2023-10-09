#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        int a=n%i;
        if(a=0){
            cout<<"not prime"<<endl;
            break;
        }
        else{
            cout<<"prime"<<endl;
            break;
    }
}