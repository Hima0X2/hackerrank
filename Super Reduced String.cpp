#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     int i,n;
    //sort(s.begin(),s.end());
    for(i=0;i<s.size();i++){
     if(s[i]==s[i+1]){
          s.erase(s.begin()+i);
           s.erase(s.begin()+i);
           i=-1;
     }
    }
    if(s.size()==0)cout<<"Empty String"<<endl;
    else cout<<s<<endl;
}
