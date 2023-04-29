#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a[26],i,d,p=-1;
    string s;
    for(i=0; i<26; i++)
    {
        cin>>a[i];
    }
    cin>>s;
    d=s.length();
    //cout<<d<<endl;
    for(int j=0; j<d; j++)
    {
        if(a[s[j]-'a'] > p)
        {
            p = a[s[j]-'a'];
        }
    }
    cout<<d*p<<endl;
}
