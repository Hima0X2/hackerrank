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
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,j;
     cin>>t;
     while(t--){
 long long int n;
        cin >> n;
         long long int mn = 2*n;
        long long int matrix[mn][mn];

        for ( i=0;i < mn;i++) {
            for ( j=0; j < mn; j++){
                    cin >> matrix[i][j];
            }
        }
       long long int maxi = -1, sum = 0;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
               long long int mp = matrix[i][j];
                mp = max(mp,max(matrix[mn-i-1][j],matrix[i][mn-j-1]));
                mp = max(mp,matrix[mn-i-1][mn-j-1]);
                sum += mp;
            }
        }
        cout << sum << endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



