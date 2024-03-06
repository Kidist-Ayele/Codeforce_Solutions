#include<iostream>
#include<vector>
using namespace std;
int main(){
    int test,num;
    int x=0;
    string color;
    vector<int> v;
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>num;
        cin>>color;
        for(int j=0;j<num;j++){
            if(color[j]=='B')
            {v.push_back(j);}
        }
        int y= v.back()-v.front()+1;
        cout<<y<<endl;
        v.clear();
    }
        
        return 0;
        }