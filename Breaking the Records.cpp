#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,max=0,min=0,sum;
     cin>>n;
     int s[n];
     for(i=0;i<n;i++)
     {
        cin>>s[i];
        //sum=sum+s[i];
        sum=s[0];
         if(sum<s[i])
        {
             max++;
             //d=s[i];
        }
        if(sum>s[i])
        {
             min++;
        }
     }
     cout<<max<<" "<<min<<endl;
}
