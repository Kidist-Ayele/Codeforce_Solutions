#include<iostream>
using namespace std;
int main(){
    int n,a,h,x=0;
    cin>>n>>h;
    for (int i =0 ; i<n;i++){
        cin>>a;
       if(a<=h){
            x++;
       }
       else{
        x+=2;
       }   
    }
    cout<<x;
    return 0;
}