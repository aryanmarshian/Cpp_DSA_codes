 #include<iostream>
 using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<(n-1);i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);

    }
} 
int main(){
    int arr[5]={22,34,11,27,76};
    selectionsort(arr,5);
    for(int j=0;j<5;j++){
        cout<<" "<<arr[j];
    }

}