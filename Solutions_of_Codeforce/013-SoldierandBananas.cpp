#include<iostream>
using namespace std;
int main(){
    int k,n,w,z,x,a,s=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        x=k*i;
        s+=x;
    }
    z=n-s;
    
    if(z<0){
        a = abs(z);
        cout<<a;
    }
    else {
        cout<<0;
    }
    
    return 0;
}