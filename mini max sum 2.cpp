#include<bits/stdc++.h>
using namespace std;
int main(){
long long arr[1000],sum=0,total[1000];

for(int i=0;i<5;i++){
    cin >> arr[i];
    sum+=arr[i];
}
for(int j=0;j<5;j++){
    total[j]=sum-arr[j];
     }
     sort(total,total+5);
     cout << total[0] << " " << total[4];
}
