#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int h[100]={0};
    cin>>x;
    int a[x];
    for (int i = 0; i < x; i++)
    {
        cin>>a[i];
        h[a[i]]++;
    }
    int max=h[1],ans;
 for (int i = 2; i < 6; i++)
    {
         if(max<h[i])
         {
              max=h[i];
              ans=i;
         }
    }
    cout<<ans<<endl;
}
