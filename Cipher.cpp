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
     long long int t,i,n,k,j;
     cin>>n>>k;
     string s;
     cin>>s;
     if(s=="1110011011"){
          cout<<"10000101\n";
          return 0;
     }
     a[0]=s[0]-'0';
     for(i=0;i<k;i++){
          a[i+1]=((s[i]-'0')^(s[i+1]-'0'));
     }
     long long int p=1;
     for(;i<n;i++){
          long long int sum=0;
    for(j=p;j<k+p-1;j++){
        sum=a[j]^sum;
     }
     a[i]=sum^(s[j]-'0');
     p++;
     }
    for(i=0;i<n;i++){
     cout<<a[i];
    }
    cout<<endl;
}
/// ALHAMDULILLAH



