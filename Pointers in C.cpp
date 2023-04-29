#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,*p,*q,sum,sub;
    cin>>a>>b;
    p=&a;
    q=&b;
     sum = *p + *q;
     sub=abs(*p-*q);
    cout<<sum<<endl;
    cout<<sub<<endl;
}
