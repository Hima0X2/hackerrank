/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
     long long int t,j,i,n,l,r,mx=0;
     cin>>l>>r;
     for(i=l;i<=r;i++){
          for(j=i+1;j<=r;j++){
               mx=max(mx,(i^j));
          }
     }
     cout<<mx<<endl;
}
/// ALHAMDULILLAH



