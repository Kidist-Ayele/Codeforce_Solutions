 #include <iostream>
 #include<vector>
 #include<algorithm>
using namespace std;
int main() {
    long long test,y=0;
    int num,x;
    
    cin>>test;
    for (int i=0;i<test;i++){
        cin>>num;
        vector<int>v1(num);
        vector<int>v2(num);
        for(int j=0 ;j<num;j++){
            cin>>x;
            v1[j]=x;
            v2[j]=x;
        }
        sort(v2.begin(),v2.end());
        for(int j=0;j<num;j++){
            if(v1[j]!=v2[j]){
                y++;
            }
        }
         if(y%2==0){
                y/=2;
            }
        cout<<y<<endl;
        y=0;

    }
    return 0;
}
