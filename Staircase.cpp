#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,row,col;
//printf("enter the value of n=");
scanf("%d",&n);
for(row=1;row<=n;row++)
{
    for(col=1;col<=n-row;col++)
    {
        printf(" ");
    }
    for(col=1;col<=row;col++)
    {
        printf("#");
    }
    printf("\n");
    }
     return 0;
}
