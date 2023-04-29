#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n;
      long long int v[10]={0,1,2,3,4,5,6,7,8,9};
     string s="9";
     cin>>t;
     while(t--){
          cin>>n;
          if(n==1)cout<<s<<endl;
          else{
                    int p=8;
                    for(i=1;i<n;i++)
                    {
                         s=s+to_string(v[p]);
                         p++;
                         if(p==10){p=0;}
                    }
                    cout<<s<<endl;
          }
          s="9";
     }
}
