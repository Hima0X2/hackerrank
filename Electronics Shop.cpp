#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long b,n,m,i,j,sum,k=0,z[100000],p;
   bool flag=false;
   cin>>b>>n>>m;
   long long int us[m],key[n];
   for(i=1;i<=n;i++)
   {
        cin>>key[i];
   }
   for(j=1;j<=m;j++)
   {
        cin>>us[j];
   }
   for(i=1;i<=n;i++)
   {
         for(j=1;j<=m;j++)
         {
              sum=us[j]+key[i];
              if(sum<=b)
              {
                    z[k]=sum;
                    k++;
                    flag=true;
              }
         }
   }
   sort(z,z+k);
  p=z[k-1];
  if(flag==true)cout<<p<<endl;
  else cout<<"-1"<<endl;
}
