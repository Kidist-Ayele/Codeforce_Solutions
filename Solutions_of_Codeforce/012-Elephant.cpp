#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    m=n/5;
    if(n%5==0){
        cout<<m;
    }
    else {
        m=m+1;
        cout<<m;
    }
    
    return 0;
}