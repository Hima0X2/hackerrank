#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,a[1000];
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
           scanf("%d",&a[i]);
     }
      for(i=n-1;i>=0;i--)
     {
           printf("%d ",a[i]);
     }
     printf("\n");
}
