#include<iostream>
using namespace std;
int main(){
    int n,m,x=0;
    cin>>n>>m;
    while(n<=m){
        n*=3;
        m*=2;
        x++;
    }
    cout<<x;
    return 0;
}