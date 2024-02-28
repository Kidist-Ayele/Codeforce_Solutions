#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string n;
    int x,y=0,s=0;
    cin>>n;
    x=n.length();
    vector<char> vec(n.begin(),n.end());
    for(int i=0;i<x;i++)
    {   
        
         if(vec[i]=='4' || vec[i]=='7'){
            s+=1;
        }  
    }
    if(s==4 || s==7){
        cout<<"YES";
    }
    else {
            cout<<"NO";
        }
    return 0;
}
// char compared with char not direct number