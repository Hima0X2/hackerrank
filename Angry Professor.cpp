#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,n,i,k,a[100000],d=0;
     cin>>t;
     while(t--){
          cin>>n>>k;
          for(i=0;i<n;i++){
                    cin>>a[i];
          }
          for(i=0;i<n;i++){
               if(a[i]<=0){d++;}
          }
          if(d>=k){cout<<"NO"<<endl;}
          else{cout<<"YES"<<endl;}
          d=0;
     }
}
