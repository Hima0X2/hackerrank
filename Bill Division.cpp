#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k,i,sum=0,b;
     cin>>n>>k;
     int a[n];
     for(i=0;i<n;i++)
     {
          cin>>a[i];
          sum=sum+a[i];
     }
cin>>b;
          sum=sum-a[k];
          sum=sum/2;
          if(sum==b)
          {
               cout<<"Bon Appetit"<<endl;
          }
          else
          {
               sum=abs(b-sum);
               cout<<sum<<endl;
          }
     }

