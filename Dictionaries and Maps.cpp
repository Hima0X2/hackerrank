#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,j;
     string a,b;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>a[i];
          cin>>j;
     }
       for(i=0;i<n;i++)
     {
           cin>>b[i];
          if(a[i]!=b[i])cout<<"NOT FOUND"<<endl;
          else if(a[i]==b[i])cout<<a[i]<<"="<<j<<endl;
     }
     return 0;
}
