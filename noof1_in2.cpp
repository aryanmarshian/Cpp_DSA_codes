#include<iostream>
using namespace std;

int numb1(int n){
    int count=0;
    while(n!=0){
        if(n%2==1){
            count++;
        }
        n=n/2;
    }
    return count;
}
int main(){
    int a;
    cin>>a;
    int ans=numb1(a);
    int b;
    cin>>b;
    ans=ans+numb1(b);
    cout<<ans;
} 