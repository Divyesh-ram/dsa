#include<iostream>
using namespace std;

int main(){

    int arr[] ={1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    //cout<<n<<endl;
    int index=0,max=n-1;
    while(index<max){
        int temp = arr[index];
        arr[index] = arr[max];
        arr[max] = temp;
        index++;
        max--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}