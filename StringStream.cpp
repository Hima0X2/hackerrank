#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
int i;
cin >> str;
for(i=0;i<str.length();i++)
{
     if(str[i]!=',')cout<<str[i];
     else
     {
          cout<<endl;
     }
}
}
