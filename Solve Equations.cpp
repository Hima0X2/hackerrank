/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int x, y, d;
long long int gcd(long long int a, long long int b){
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    d=gcd(b, a % b);
    long long int x1,y1;
    x1 = y;
    y1= x - (a/b)*y;
    x=x1;
    y=y1;
    return d;
}
//time complexity = O(log(max(a, b))).
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,a,b,c;
     cin>>t;
     while(t--){
cin>>a>>b>>c;
d=gcd(a,b);
cout<<x<<" "<<y<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
