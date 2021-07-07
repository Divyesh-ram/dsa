#include<iostream>
using namespace std;

void swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y= temp;
}
void select(int arr[],int n){
    int i,j,mid;
    for(i=0;i<n-1;i++){
        mid=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[mid])
            mid=j;

        }
        swap(&arr[mid],&arr[i]);
    }
}
void print(int arr[],int n){
    int i;
     
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
   cout<<endl;
   

}
int main(){
    int arr[]={-12,2,5,-13,-20,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    select(arr,n);
    cout<<"sorted array";
    print(arr,n);
    

    return 0;

}