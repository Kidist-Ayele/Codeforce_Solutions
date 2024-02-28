#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int y,k;
    string n,str;
    cin>>y;
    k = y+1;
    n = to_string(k);
    int x= n.length(); 
    vector<char> v;       
    for(int i=0;i<x;i++)
        {   if(v.empty())
            {v.push_back(n[i]);}
            else
            {   
                bool found = false;
                for(int j=0;j<x;j++)
                { auto it = find(v.begin(), v.end(), n[i]);
                if( it != v.end()&& n[i]<'9') {
                    n[i]++;
                    }
                else if( it != v.end()&& n[i]=='9') {
                        v.push_back(n[i]);
                        found = true;
                        break;
                    }
                    
                else{
                    v.push_back(n[i]);
                    

                }
                }
            if (found){
                str+=v[0];
                    int z = stoi(str);
                    z ++;
                    n = to_string(z);
                    v.clear();
                    i = -1;
            }
            else{
                v.push_back(n[i]);
            }
                    }
                
              
                  
            }
        
        
    str+=v[0];
    cout<<str;
    return 0;
}