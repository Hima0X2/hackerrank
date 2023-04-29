#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a[5],i,sum=0,sub=0;
     for(i=0;i<5;i++)
     {
          cin>>a[i];
     }
     sort(a,a+5);
     for(i=1;i<5;i++)
     {
        sum=sum+a[i];
     }
     for(i=0;i<4;i++)
     {
        sub=sub+a[i];
     }
     cout<<sub<<" ";
     cout<<sum<<endl;
}
