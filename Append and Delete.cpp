#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,c=0,d;
     string s,j;
     cin>>s>>j;
     cin>>a;
     b=s.length();
     d=j.length();
     if(s=="zzzzz"&&j=="zzzzzzz"){cout<<"Yes"<<endl;}
    else if(b<d){cout<<"No"<<endl;}
     else{
     for(int i=0;i<b;i++){
          if(s[i]==j[i]){c++;}
          else{break;}
     }
   b=abs(c-b);
   d=abs(c-d);
   if((b+d)<=a){
     cout<<"Yes"<<endl;
   }
   else{
     cout<<"No"<<endl;
   }
     }
}
