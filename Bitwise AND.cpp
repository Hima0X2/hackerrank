#include<bits/stdc++.h>
using namespace std;
fun(int n,int k)
{
     int j,l,sum,c=0;
      for(j=1;j<n;j++)
          {
               for(l=(j+1);l<=n;l++)
               {
                    sum=j&l;
                    if((sum>c)&&(sum<k))
                    {
                         c=sum;
                    }
               }
          }
 return c;
}
int main()
{
     int i,j,n,k,c,t,sum;
     cin>>t;
     for(i=1;i<=t;i++)
     {
          cin>>n>>k;
          int c=fun(t,k);
          cout<<c<<endl;
     }
     return 0;
}
