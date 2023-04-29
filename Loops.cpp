#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,sum,i;
     scanf("%d",&n);
     for(i=1;i<=10;i++)
     {
          sum=n*i;
          printf("%d x %d = %d\n",n,i,sum);
     }
}
