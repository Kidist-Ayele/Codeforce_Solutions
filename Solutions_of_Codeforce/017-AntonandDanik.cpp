#include<iostream>
#include<string>
using namespace std;
int main(){
    string n;
    int y,d=0,a=0;
    cin>>y;
    cin>>n;
    for(int i=0;i<y;i++)
    {   
        char c = n[i];
        
         if(c=='A'){
            a++;
        } 
        else if(c=='D'){
            d++;
        } 
    }
    if(a>d){
        cout<<"Anton";
    }
    else if(d>a) {
            cout<<"Danik";
        }
    else{
        cout<<"Friendship";
    }
    return 0;
}
