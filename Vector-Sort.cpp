#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,a[100000];
    vector<int> v;
    cin>>n;
    for(i=0;i<n;i++){
     cin>>a[i];
     v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    for(auto u:v){
     cout<<u<<" ";
    }
    cout<<endl;
}

