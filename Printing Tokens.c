#include<stdio.h>
#include<string.h>
int main()
{
     int i,n,l;
     char a[100000];
     gets(a);
     l=strlen(a);
     for(i=0;i<l;i++){
          if(a[i]==' '){
               printf("\n");
          }
          else{
                printf("%c",a[i]);
          }
     }
}


