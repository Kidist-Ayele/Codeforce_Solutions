#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int test,x1,x2,x3,x4,y1,y2,y3,y4;
    int d1=0,d2=0,side1,side2;
    int area;
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        cin>>x4>>y4;
        if(x1==x2)
        {side1 = pow((y2-y1),2);
        d1 = sqrt(side1);
        side2= pow((x4-x2),2);
        d2 = sqrt(side2);}
        else if(x2==x3){
            side1 = pow((y3-y2),2);
            d1 = sqrt(side1);
            side2= pow((x4-x3),2);
            d2 = sqrt(side2);
        }
        else if(x1==x4){
            side1 = pow((y4-y1),2);
            d1 = sqrt(side1);
            side2= pow((x3-x1),2);
            d2 = sqrt(side2);
        }
        else if(x1==x3){
            side1 = pow((y3-y1),2);
            d1 = sqrt(side1);
            side2= pow((x4-x3),2);
            d2 = sqrt(side2);
        }

        area = d1* d2;
        cout<<area<<endl;
    }
    return 0;
}