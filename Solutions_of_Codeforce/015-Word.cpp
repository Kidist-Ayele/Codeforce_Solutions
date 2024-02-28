#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int x,y,k;
    string n;
    cin>>n;
    x = n.length();
    int up=0, lo=0;
for(auto i: n){
    if(isupper(i))    up++;
    if(islower(i))   lo++;
}
    
    if(up>lo){
        transform(n.begin(),n.end(),n.begin(),::toupper);
        
    }
    else{
        transform(n.begin(),n.end(),n.begin(),::tolower);
    }
    
    cout<<n;
    return 0;
}
// isupper() and islower cases and initialization like int x(0); is possible
