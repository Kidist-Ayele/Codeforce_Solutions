#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s,t;
    cin>>s;
    cin>>t;
    vector<char>vec;
    int y=t.length();
    for(int i=y-1;i>=0;i--)
    {   
        
        vec.push_back(t[i]);
    }
    string str;
    str.append(vec.begin(), vec.end());
    if(str==s){
        cout<<"YES";
    }
    
    else{
        cout<<"NO";
    }
   
    return 0;
}
// how to read string from the end using vector and also how to change vector to string