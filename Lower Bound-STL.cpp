#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v;
    int n,q,y;
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }  
    sort(v.begin(),v.end());
    cin>>q;
    while(q--){
       cin>>y;
       auto it = lower_bound(v.begin(),v.end(),y);
      if(it != v.end()&& *it==y){
      cout<<"Yes ";
      }
      else{
          cout<<"No ";
      }
       cout<<(it-v.begin())+1<<endl;
    }
    return 0;
}
