#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x,sum=215;
     cin>>x;
     if(x<1918)
     {
          if(x%4==0)
          {
          cout<<"12.09."<<x<<endl;//sum=sum+29;
          }
          else{
                cout<<"13.09."<<x<<endl;//sum=sum+28;
          }
     }
     else if(x==1918)
     {
        cout<<"26.09."<<x<<endl;// sum=sum+15;
     }
     else
          {
     if(x%400==0)
     {
          cout<<"12.09."<<x<<endl;//sum=sum+29;
     }
     else if((x%100!=0)&&(x%4==0))
     {
          cout<<"12.09."<<x<<endl;//sum=sum+29;
     }
     else
     {
          cout<<"13.09."<<x<<endl;//sum=sum+28;
     }
     }
     //sum=256-sum;
     //printf("%d.09.%d",sum,x);
}
