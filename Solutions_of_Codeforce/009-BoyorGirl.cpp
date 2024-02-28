#include<iostream>
#include<set>
using namespace std;
int main(){
    string m;
    cin>>m;
    set<char> username(m.begin(),m.end());
    int x = username.size();
   
    
    if(x%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    
    return 0;
}
// set function declaration and string to set