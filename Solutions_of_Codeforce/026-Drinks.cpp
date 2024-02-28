#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    double n,p,y,x=0;
    cin>>n;
    for (int i =0 ; i<n;i++){
        cin>>p;
        y = p/100;
        x+=y;
        }
    double k = x/n;
    double z = k*100;
    cout<<fixed<<setprecision(12)<<z; 
    return 0;
}