#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,t,x,y;
     cin>>t;
     set<long long int> s;
     while(t--){
          cin>>y;
          cin>>x;
          if(y==1){
               s.insert(x);
          }
          else if(y==2){
               s.erase(x);
          }
          else{
               if(s.count(x)==1){
                    cout<<"Yes"<<endl;
               }
               else{
                    cout<<"No"<<endl;
               }
          }
     }
}
