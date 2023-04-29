#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,c=1,i;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++)
     {
          cin>>a[i];
     }
     sort(a,a+n);
     for(i=n-1;i>=0;i--)
     {
          //cout<<a[i]<<endl;
          if(a[i]==a[i-1])
          {
               c++;
          }
          else{
               break;
          }
     }
     cout<<c<<endl;
     return 0;
}
