#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    vector<int> v;
    for (int i =1 ; i<=n;i++){
        cin>>k;
        v.push_back(k);}
    for(int j=1;j<=n;j++){
           auto it = find(v.begin(), v.end(), j);
           if (it != v.end()) {
            int z = distance(v.begin(), it)+1;
            cout<<z<<" ";
        }
    } 
    return 0;
}