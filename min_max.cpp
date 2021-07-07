#include<bits/stdc++.h>
using namespace std;
 int main(){
     int arr[] ={100,12,1,56,2};
     int n = sizeof(arr) / sizeof(arr[0]);
     int max=arr[0],min=arr[0];
     for(int i=0;i<n;i++){
         if(max<arr[i]){
            max=arr[i];
        }
        else if(min>arr[i]){
            min=arr[i];
        }
        
     }
     cout<<max<<" "<<min<<endl;
     
     
 }