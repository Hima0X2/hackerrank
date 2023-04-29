#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,a[100000],k,b,c,d;
    vector<int> v;
    cin>>n;
    for(i=0;i<n;i++){
     cin>>a[i];
     v.push_back(a[i]);
    }
   cin>>b>>c>>d;
    v.erase(v.begin()+b-1);
    v.erase(v.begin()+c-1,v.begin()+d-1);
    cout<<v.size()<<endl;
for(auto u:v){
     cout<<u<<" ";
    }
    cout<<endl;
}
