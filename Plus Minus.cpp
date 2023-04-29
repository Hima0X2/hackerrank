#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    float c=0,d=0,e=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>0)
        {
            c++;
        }
        else if(a[i]<0)
        {
            d++;
        }
        else
        {
            e++;
        }
    }
    c=c/n;
    d=d/n;
    e=e/n;
    printf("%0.5f\n",c);
    printf("%0.5f\n",d);
    printf("%0.5f\n",e);
}
