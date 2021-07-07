#include<iostream>
using namespace std;

string lupper(string s){
string res = s;
for (int i = 0; i < s.length(); i++)
{
    /* code */
    if(s[i]-'a'>0 &&s[i]-'a'<=25){
        res[i]= res[i]-'a'+'A';
        
    }
}
return res; 

}

int main(){
string  r = "dIvyeSH$";
string w=lupper(r);
cout<<w<<"\n";
return 0;

}