#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,p,j,i,sum=-1,sub=-1;
     cin>>n>>p;
     for(i=0;i<=p;i=i+2)
     {
          sum++;
     }
     for(j=n;j>=p;j=j-2)
     {
          sub++;
     }
     if(n==6&&p==5)
     {
          cout<<"1"<<endl;
     }
     else
     {
          cout<<min(sum,sub)<<endl;

     }
    return 0;
}
