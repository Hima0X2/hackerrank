#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
   map<string,int> mp;
   long long int t,a,x;
   string s;
   cin>>t;
   while(t--){
       cin>>a;
       if(a==1){
           cin>>s>>x;
           mp[s]=mp[s]+x;
       }
       else if(a==2){
           cin>>s;
           mp[s]=0;
       }
       else{
           cin>>s;
           cout<<mp[s]<<endl;
       }
   }
    return 0;
}



