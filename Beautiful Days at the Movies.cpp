#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long i,j,k,rev,d,z,count=0,p;
     cin>>i>>j>>k;
     for(int a=i;a<=j;a++){
               p=a;
               rev=0;
          while(p!=0){
               d=p%10;
               rev=rev*10+d;
               p=p/10;
          }
          if(abs(rev-a)%k==0){count++;}
     }
     cout<<count<<endl;
}
