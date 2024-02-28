#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,p,x=0;
    cin>>n;
    vector<int> v;
    for (int i =0 ; i<n;i++){
        cin>>p;
        v.push_back(p);
        }
    for(int j=0;j<n;j++){
        if(v[j]!=v[j+1]){
            x++;
       }
    }
    
    cout<<x; 
    return 0;
}