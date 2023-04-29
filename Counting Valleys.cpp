#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,sum=0,ans=0;
     cin>>n;
     string a;
     for(i=0;i<n;i++){
          cin>>a[i];
          if(a[i]=='U')
          {
               ans++;
          }
          else if(a[i]=='D'){
               ans--;
               if(ans==0){
               sum++;
          }
          }
          }
          cout<<sum<<endl;
}
