#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a[10000],i;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     for(i=n-1;i>=0;i--){
         cout<<a[i]<<" ";
     }
     cout<<endl;
}
