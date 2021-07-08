#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int first=-1;
    int n=v.size();
    for(int i=0;i<n;i++){
        int item;
        cin>>item;
        v.push_back(item);
        
    }
    for(int i=n-1;i>=1;i--){
        if(v[i-1]<v[i]){
            first=i;
            break;
        }
    }
    if(first==-1){
        sort(v.begin(),v.end());
        
    }
    int second=-1;
    for(int i=first;i>n;i++){
        if(v[i]>v[first-1]){
            second=i;
        }
    }
    int temp=v[second];
    v[second]=v[first-1];
    v[first-1]=temp;
    sort(v.begin()+first,v.end());
    
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    return 0;
}