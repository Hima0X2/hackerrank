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
long long int f[mx];
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>t;
     while(t--){
          bool ok=false;
               long long int fib1=0,fib2=1,sum=0;
cin>>n;
while(sum<n){
sum=fib1+fib2;
if(sum==n){
     ok=true;
     break;
}
fib1=fib2;
fib2=sum;
}
if(ok||n==1||n==0){
     cout<<"IsFibo\n";
}
else{
     cout<<"IsNotFibo\n";
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




