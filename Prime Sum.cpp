/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
bool Prime(long long int n){
     int i;
     for(i=2;i<n;i++){
          if(n%i==0){
               return 0;
          }
     }
     return 1;
}
void goldbach(long long int n,long long int k){
     long long int i=k,j;
     for(j=n-i;j>n/k;j--){
          if(Prime(i)&&Prime(j)){
               cout<<i<<"+"<<j<<"="<<n<<endl;
          }
        i++;
     }
}
int main()
{
     optimize();
     long long int t,i,n,k;
     cin>>t;
     while(t--){
     cin>>n>>k;
     if(n>k&&n%k==0){
       goldbach(n,k);
     }
     else{
          cout<<"NO\n";
     }
     }
}
/// ALHAMDULILLAH



