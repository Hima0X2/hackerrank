#include<bits/stdc++.h>
using namespace std;
int factorial(int x)
{
     if(x==1) return 1;
     else return x * factorial(x-1);
}
int main()
{
     int n,p;
     cin>>n;
     p=factorial(n);
     cout<<p<<endl;
}