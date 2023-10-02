#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    cout<<"size "<<v.capacity()<<endl;

    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);
    cout<<"size "<<v.capacity()<<endl;
    cout<<"finding 7: "<<binary_search(v.begin(),v.end(),7)<<endl;
    cout<<"lower bound "<<lower_bound(v.begin(),v.end(),7)-v.begin()<<endl;
    int a =5;
    int b=7;
    swap(a,b);
}

