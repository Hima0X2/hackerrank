#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x,y,z,p,q,n,i;
     cin>>n;
     for(i=0;i<n;i++){
     cin>>x>>y>>z;
     if((x<y)&&(z>y)&&(x<z)||(x>z)&&(y>z)&&(x>y))
     {
          cout<<"Cat B"<<endl;
     }
     else if((x>y)&&(z>x)&&(y<z)||(y>z)&&(x>z)&&(x<y))
     {
          cout<<"Cat A"<<endl;
     }
     else if((z<y)&&(x<z)&&(x<y)||(y<x))
     {
          p=y-z;
          q=z-x;
          if(p==q)
          {
                cout<<"Mouse C"<<endl;
          }
          else if(q>p)
          {
               cout<<"Cat B"<<endl;
          }
          else
          {
               cout<<"Cat A"<<endl;
          }
     }
     else if(z==y)
     {
           cout<<"Cat B"<<endl;
     }
      else if(z==x)
     {
           cout<<"Cat A"<<endl;
     }
     }
}
