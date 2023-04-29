#include<bits/stdc++.h>
using namespace std;
void plu(int *a,int*b)
{
     int *q;
  *q=*a+*b;
  cout<<*q<<endl;
}
void mi(int *a,int*b)
{
     int *p;
  *p=abs(*a -*b);
  cout<<*p<<endl;
}
int main()
{
     int a;
     int b;
     cin>>a;
     cin>>b;
     plu(&a,&b);
     mi(&a,&b);
    // b=modulus(a-b);
}
