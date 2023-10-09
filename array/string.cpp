#include<iostream>
using namespace std;
char tolowercase(char ch){
    if(ch>='a' && ch<='z')
    return ch;
    else{
        return ch -'A'+'a';
    }
}
bool checkpalindrome(char a[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(tolowercase(a[s]) != tolowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;

}
void reverse(char name[], int n){
    int s=0;
    int e =n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getlength(char name[]){
    int count =0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count; 

}
int main(){
    char name[20];
    cout<< "enter name : ";
    cin >> name;
    cout<<"hello "<<name<<endl;
    int n=getlength(name);
    cout<<"size : "<<n<<endl;
    reverse(name,n);
    cout<<"reverse : "<<name<<endl;
    cout<< "palindrome : "<<checkpalindrome(name,n)<<endl;

    return 0; 

}