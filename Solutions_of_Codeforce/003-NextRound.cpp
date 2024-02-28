#include<iostream>
using namespace std;
int main(){
    int n,k,i;
    int s = 0;
    cin>>n>>k;
    int j[n];
    for(i=1; i<=n;i++){
        cin>>j[i];

        }
    
    if(j[k]!=0){
         while(j[k]==j[k+1] ){
            k+=1;
        }
         cout<<k;
    }
    else if (j[k]==0)
    {
        for(int x=1; x<=k;x++){
            if(j[x]!=0){
                s++;
            }
        }
        cout<<s;
    }
    
       
    return 0;
    }


