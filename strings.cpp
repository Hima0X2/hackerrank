#include<bits/stdc++.h>
using namespace std;
int main()
{
     string a,b;
     int c,d;
     cin>>a;
     cin>>b;
     c=a.length();
     d=b.length();
     cout<<c<<" "<<d<<endl;
     cout<<a+b<<endl;
     swap(a[0],b[0]);
     cout<<a<<" "<<b<<endl;
     return 0;
}
