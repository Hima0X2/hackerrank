#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,a[1000][1000],sum=0,n;
     cin>>n;
     for(i=1;i<=n;i++)
     {
          for(j=1;j<=n;j++)
          {
               cin>>a[i][j];
          }
     }
      for(i=1;i<=n;i++)
     {
          for(j=1;j<=n;j++)
          {
               if(i=j)
               {
                    sum=sum+a[i][j];
               }
              // sum=sum+a[1][n];
          }
     }
      for(i=1,j=n;i<=n;i++,j--)
     {
               sum=sum-a[i][j];
               }
             int x=abs(sum);
               cout<<x<<endl;
     //sum=abs(a[1][1]+a[2][2]+a[3][3]-a[1][3]-a[2][2]-a[3][1]);
     //cout<<sum<<endl;
}
