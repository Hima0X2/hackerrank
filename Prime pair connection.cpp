/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
}
const long long int mx=1e8+123;
bitset<mx>is_prime;
vector<long long int>prime;
map<long long int,long long int> mp;
void Prime(long long int lim){
    lim+=10;
    for(long long int i=3; i<=lim; i+=2) {
          is_prime[i]=1;
    }
    long long int sq=sqrt(lim);
    for(long long int i=3; i<=sq; i+=2){
        if(is_prime[i]){
            for(long long int j=i*i; j<=lim; j+=(i+i)){
          is_prime[j]=0;
            }
        }
    }
    is_prime[2]=1;
    prime.push_back(2);
    mp[2]=1;
    long long int j=2;
    for(long long int i=3; i<=lim; i+=2){
        if(is_prime[i]) {
               prime.push_back(i);
               mp[i]=j;
               j++;
        }
    }
}
int main()
{
     optimize();
     Prime(1e7);
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,l,r;
     cin>>t;
     while(t--){
cin>>l>>r;
while(1){
     if(is_prime[l]){
          break;
     }
     else{
          l++;
     }
}
long long int sum=0;
for(i=l;i<=r;i=i+1){

}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




