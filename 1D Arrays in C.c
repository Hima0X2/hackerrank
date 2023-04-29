#include<stdio.h>
int main()
{
     int i,a[100000],n,sum=0;
     scanf("%d",&n);
     for(i=0;i<n;i++){
          scanf("%d",&a[i]);
          sum=sum+a[i];
     }
     printf("%d\n",sum);
}
