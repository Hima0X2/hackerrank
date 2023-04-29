#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k,i,j,sum=0,count=0;
     cin>>n;
     cin>>k;
     int a[n];
     for(i=0;i<n;i++)
     {
          cin>>a[i];
     }
       for(i=0;i<n;i++)
     {
            for(j=i+1;j<n;j++)
       {
          sum=a[i]+a[j];
          if(sum%k==0)
          {
               count++;
          }
        }
     }
     cout<<count<<endl;
}
