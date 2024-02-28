#include<iostream>
using namespace std;
int main(){
    int n,x=0;
    string m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        
        if(m[i]==m[i+1]){
            x++;
        }

    }
    cout<<x;
    return 0;
}