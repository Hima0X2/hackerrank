#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,d,m,sum=0,j=0,c=0,k;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++)
     {
          cin>>a[i];
     }
     cin>>m>>d;
     if(n!=1){
     for(i=0;i<n/2;i++)
     {
        for(j=0,k=j;j<d;j++)
     {
        sum=sum+a[k];
     }
    // cout<<sum<<endl;
     if(sum==m)
     {
          c++;
     }
     sum=0;
     }
     }
     else {
           for(i=0;i<n;i++)
     {
        for(j=0,k=j;j<d;j++)
     {
        sum=sum+a[k];
     }
     //cout<<sum<<endl;
     if(sum==m)
     {
          c++;
     }
     sum=0;
     }
     }
     cout<<c<<endl;
}
