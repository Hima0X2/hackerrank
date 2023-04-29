#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx],b[mx];

int main()
{
     optimize();
long long int n,i;
cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++){
    cin>>b[i];
}
long long int x=__gcd(a[0],b[0]);
long long int p=a[0],q=b[0];
for(i=1;i<n;i++){
    if(x<__gcd(a[i],b[i])){
     x=__gcd(a[i],b[i]);
     p=a[i],q=b[i];
    }
}
cout<<p+q<<endl;
}


