#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,c=0,i,j,k;
     cin>>n;
     int a[n];
     for(k=0;k<n;k++)
     {
          cin>>a[i];
     }
    for(i=0;i<n;i++)
    {
         for(j=0;j<n-i-1;j++)
         {
              if(a[j]>a[j+1])
              {
                   swap(a[j],a[j+1]);
                   c++;
              }
         }
    }
    cout<<c<<endl;
}
