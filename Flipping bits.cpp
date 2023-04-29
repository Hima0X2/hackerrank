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
long long int bit(long long int n){
     long long int i;
      bitset<32> b(n);
   for(i=0;i<32;i++){
     if(b[i]==1)b[i]=0;
     else b[i]=1;
   }
   return b.to_ulong();
}
int main()
{
     optimize();
     long long int t,i,n;
     cin>>t;
     while(t--){
       cin>>n;
          cout<<bit(n)<<endl;
     }
}
/// ALHAMDULILLAH



