#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x1,x2,v1,v2,a,b;
     cin>>x1>>v1>>x2>>v2;
     a=x1;
     b=x2;
       if((x2>x1)&&(v2>v1))
     {
           cout<<"NO"<<endl;
           return 0;
     }
     while(1)
     {
        if(a==b)
     {
          cout<<"YES"<<endl;
          return 0;
     }
      else if((b<a)||(v2>v1))
     {
           cout<<"NO"<<endl;
           return 0;
     }
     else
     {
          a=a+v1;
          b=b+v2;
     }
     }
}
