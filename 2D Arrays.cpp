#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int sum,i,j,a[100][100],sum1;
     for(i=0;i<6;i++){
          for(j=0;j<6;j++){
               cin>>a[i][j];
          }
     }
     sum=a[0][0]+a[0][1]+a[0][2]+a[1][1]+a[2][0]+a[2][1]+a[2][2];
      for(i=0;i<4;i++){
          for(j=0;j<4;j++){
                    sum1=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
          if(sum1>sum){
               sum=sum1;
          }
          }
      }
      cout<<sum<<endl;
}
