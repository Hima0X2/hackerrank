#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     long long int i,d,n,x,c=0;
     cin>>n;
     d=s.length();
     x=0;
     for(i=0;i<n;i++){
       if(s[x]=='a'){
               c++;
       }
       x++;
          if(x==d)
          {
               x=0;
          }
     }
     cout<<c<<endl;
}
