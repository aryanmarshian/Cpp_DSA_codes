#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<=n){
        int j=1;
        char start=('A'+i);
        while(j<=n){
            cout<<start;
            start=start+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}