#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x,y,z,sum=0;
     scanf("%d:%d:%d",&x,&y,&z);
     string s;
     cin>>s;
     if(s[0]=='P')
     {
          if(x<12){
          sum=12+x;
          }
          else{sum=x;}
     }
      else if(x==12)
          {
               sum=0;
          }
     else
     {
          sum=x;
     }
     printf("%02d:%02d:%02d\n",sum,y,z);
     //cout<<sum<<":"<<y<<":"<<z<<endl;
}
