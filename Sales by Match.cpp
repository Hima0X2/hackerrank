#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,c=0;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++)
     {
          cin>>a[i];
     }
     sort(a,a+i);
      for(i=1;i<n;i++)
     {
          if(a[i-1]==a[i])
          {
               c++;
               i++;
          }
     }
     cout<<c<<endl;
}
