#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int d,n,k,i,a[10000];
     cin>>n>>k;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     sort(a,a+n);
     if(a[n-1]>k){
     d=a[n-1]-k;
     cout<<d<<endl;
     }
     else{
          cout<<0<<endl;
     }
}

