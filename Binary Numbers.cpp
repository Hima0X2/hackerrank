#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a[100],i,n,c=1,d=1;
     cin>>n;
     for(i=0;0<n;i++)
     {
          a[i]=n%2;
          n=n/2;
     }
     for(i=i-1;i>=0;i--)
     {
          //cout<<a[i];
          if(a[i-1]==a[i])
          {
               if(a[i]==1)
               {
                    c++;
                     if(c>d)
                   {

                        d=c;
                   }
               }
          }
               else if(a[i]==0)c=1;continue;
     }
     //if(c>d)
    cout<<d<<endl;
}
