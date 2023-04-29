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
long long int a[mx];

int main()
{
     optimize();
     long long int t,i,n;
     cin>>t;
     while(t--){
     cin>>n;
     i=n;
     bool ok=false;
     while(n&(n-1)){
          n=n&(n-1);
          ok=true;
         continue;
     }
     if(ok){
     n=n&(n-1);
     }
     long long int p;
     long long int x=0;
     if(n!=i){
        p=i-n;
        x++;
     }
     else{
          p=i;
     }
     cout<<p<<endl;
     x=x+log2(p);
     cout<<x<<endl;
     if(x%2){
         cout<<"Richard\n";
     }
     else{
          cout<<"Louise\n";
     }
     }
}
/// ALHAMDULILLAH



