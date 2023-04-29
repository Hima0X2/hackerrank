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
     long long int i,n;
     bool ok=true;
     string t,s;
    getline(cin, s);
    // cout<<s<<endl;
     map<int,int> mp;
     int p;
     for(i=0;i<s.size();i++){
               if(s[i]>='A'&&s[i]<='Z'){
                 p=s[i]-'A';
               }
               else if(s[i]>='a'&&s[i]<='z'){
                    p=s[i]-'a';
               }
          mp[p]=1;
     }
     for(i=0;i<26;i++){
          if(mp[i]!=1){
                   // cout<<i<<endl;
               ok=false;
          break;
          }
     }
     if(ok){
         cout<<"pangram\n";
     }
     else{
          cout<<"not pangram\n";
     }
}
/// ALHAMDULILLAH



