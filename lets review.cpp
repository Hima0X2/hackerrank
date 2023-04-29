#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,j;
     string s,b;
     cin>>n;
     for(j=0;j<n;j++)
     {
        cin>>s;
     int d=s.length();
     for(i=0;i<d;i=i+2)
     {
          //b[i]=s[i];
     cout<<s[i];
     }
     cout<<" ";
      for(i=1;i<d;i=i+2)
     {
          //b[i]=s[i];
     cout<<s[i];
     }
     cout<<endl;
     }
}
