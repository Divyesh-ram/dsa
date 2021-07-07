#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,t,rev=0;
    cin>>x;
   while(x!=0){
   t=x%10;
   x/=10;
    if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && t > 7)) return 0;
   if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && t < -8)) return 0;   
   rev=rev*10+t;
   }
   cout<<rev;
    
}