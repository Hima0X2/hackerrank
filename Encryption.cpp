#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s,m,n;
     int d,i,z,j,k=0;
     cin>>s;
     d=floor(sqrt(s.size()));
     z=ceil(sqrt(s.size()));
     cout<<d<<" "<<z<<endl;
     for(j=0;j<d;j++){
     for(i=0;i<z;i++,k++){
          m[i]=s[k];
     }
     n[j]=m;
     }
}
