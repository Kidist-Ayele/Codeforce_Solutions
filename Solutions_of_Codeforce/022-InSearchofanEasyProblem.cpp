#include<iostream>
using namespace std;
int main(){
    int n,a,x=0;
    cin>>n;
    for (int i =0 ; i<n;i++){
        cin>>a;
        x+=a;
        }
       if(x>=1){
            cout<<"HARD";
       }
       else{
        cout<<"EASY";
       }   
    return 0;
}