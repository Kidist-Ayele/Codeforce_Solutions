#include<iostream>
#include<algorithm>
#include <vector>
#include<string>

using namespace std;
int main(){
    string n;
    int i =0;
    cin>>n;
    
    int x=n.length();
    vector<char>v;  
    
    string separator = "+";
    
    for(int i =0 ; i<x;i+=2){
        v.push_back(n[i]);
    }
    sort(v.begin(), v.end());

    for (int j = 0; j < v.size(); ++j) {
        cout << v[j];
        if (j != v.size() - 1) {
            cout << separator;
        }
    }
    return 0;
}
// sorting ,string to vector and push to vector 
