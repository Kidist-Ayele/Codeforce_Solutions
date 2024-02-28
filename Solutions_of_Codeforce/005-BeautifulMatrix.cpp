#include<iostream>
using namespace std;
int main(){
    int a,b,c,x;
    for (int i = 0; i<5;i++){
        for (int j = 0; j<5;j++){
            cin>>x;
            if(x==1){
                a=i-2;
                b=j-2;
                c= abs(a)+abs(b);
            }
        }
    }
    cout<<c;
    return 0;
}
