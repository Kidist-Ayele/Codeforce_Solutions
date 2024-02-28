#include <iostream>
using namespace std;
int main(){
    int n,x,y,z,a;
    int sum=0;
    cin>>n;
    for(int i=0 ; i<n;i++){
        cin>>x>>y>>z;
        a = x+y+z;
    
        if(a>=2 ){
            sum = sum+1;
            
        }
        
    }
    cout<<sum;
    return 0;
    
}
