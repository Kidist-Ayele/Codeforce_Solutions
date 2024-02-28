#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,x,i=0;
    string s;
    cin>>n>>t;
    cin>>s;
    x = s.length();
    for (int j=0;j<t;j++){
        while (i<x-1)
        {
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i+=2;
            }
            else{
                i++;
            }
        }
        i=0;
        
    }
    cout<<s;
    return 0;
}