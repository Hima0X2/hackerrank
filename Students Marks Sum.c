#include<stdio.h>
int main()
{
    long long int a[10000],i,n,sum1=0,sum2=0;
      char ch;
     scanf("%d",&n);
     for(i=0;i<n;i++){
            scanf("%d",&a[i]);
     }
     scanf("%c",&ch);
      for(i=0;i<n;i++){
      if(i%2==0){
          sum1=sum1+a[i];
      }
      else{
          sum2=sum2+a[i];
      }
  }
  if(ch=='b'){ printf("%d",sum1);}
  else { printf("%d",sum2);}
}
