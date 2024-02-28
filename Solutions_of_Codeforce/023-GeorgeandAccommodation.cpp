#include<iostream>
using namespace std;
int main(){
    int n,p,q,x=0,y=0;
    cin>>n;
    for (int i =0 ; i<n;i++){
        cin>>p>>q;
        y=q-p;
       if(p<q && y>1){
            x++;
       }
    }
    cout<<x; 
    return 0;
}