#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,x;
     cin>>n;
     int a;
     for(i=0;i<n;i++)
     {
          cin>>a;
          if((a>=38)&&(x=(5-(a%5)))<3)
               cout<<a+x<<endl;
          else{ cout<<a<<endl;}
     }
}
