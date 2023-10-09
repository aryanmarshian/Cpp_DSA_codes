#include<iostream>
#include<vector>
using namespace std;

void reverseString(vector<char>& s) {
        int e=s.size()-1;
        int a=0;
        while(a<=e){
            swap(s[a],s[e]);
            a++;
            e--;
        }
    }
int main(){
    int arr[5]={12,32,45,61,82};
    int n=5;
    for(int i=0;i<n;i++){
      cout<<arr[i]<<endl;
    }
}