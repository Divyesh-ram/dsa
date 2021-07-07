#include<iostream>
using namespace std;

void fum(int *x, int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y = temp;
    int s;
    
    
    cout<<*x<<" "<<*y<<endl;
    
}
int main(){
    
    int e= 10,f=20;
    fum(&e,&f);
    
    return 0 ;

    
}
