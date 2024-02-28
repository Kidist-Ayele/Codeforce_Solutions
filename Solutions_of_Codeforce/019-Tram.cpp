#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(){
    int n,a,b,x=0;
    vector<int> vec;
    cin>>n;
    for (int i =0 ; i<n;i++){
        cin>>a>>b;
        x += b-a;
        vec.push_back(x);
        
        
    }
    auto maxElement = max_element(vec.begin(), vec.end());
    int maxValue = *maxElement;
    cout<<maxValue;
    return 0;
}
// how to know the maximum value from vector