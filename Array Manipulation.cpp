/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int v[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,m,n,a,b,k,mx=0,p=0;
     cin>>n>>m;
     while(m--){
          cin>>a>>b>>k;
         v[a]=v[a]+k;
         v[b+1]=v[b+1]-k;

     }
     for(i=1;i<=n;i++){
               p=p+v[i];
          mx=max(mx,p);
     }
     cout<<mx<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
