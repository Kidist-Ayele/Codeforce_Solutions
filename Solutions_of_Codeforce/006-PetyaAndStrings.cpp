#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string n,m;
    cin>>n>>m;
    transform(n.begin(),n.end(),n.begin(),::toupper);
    transform(m.begin(),m.end(),m.begin(),::toupper);
    if(n<m){
        cout<<-1;
    }
    else if(n>m){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}
