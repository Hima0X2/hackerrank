#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,c=0,d=0,a[1000],b[1000];
     for(i=0;i<3;i++)
     {
      cin>>a[i];
       //n=a.length();
     }
     for(i=0;i<3;i++)
     {
      cin>>b[i];
      //n=b.size();
      if(a[i]>b[i])c++;
      else if(a[i]<b[i])d++;
     }
     printf("%d %d",c,d);
}
