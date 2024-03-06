#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long test,num,con,x=0;
    vector<long long> v;
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>num;
        for(int j=0;j<num;j++){
            cin>>con;
            v.push_back(con);
        }
        sort(v.begin(),v.end());
        for(int j=0;j<num-1;j++){
            x+=v[j+1]-v[j];
        }
        cout<<x<<endl;
        v.clear();
        x=0;

    }
    return 0;
    }