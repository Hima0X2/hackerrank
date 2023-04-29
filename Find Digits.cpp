#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n,tmp,cnt = 0,r;
    cin >> t;
    for(int i = 0; i < t; i++){
       cin >>n;
        tmp = n;
        while(tmp!=0){
            r = tmp % 10;
            if(r !=0 && n%r == 0)cnt++;
            tmp/=10;
        }
        cout << cnt << endl;
        cnt=0;
    }
    return 0;
}
