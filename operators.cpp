#include<bits/stdc++.h>
using namespace std;
int main()
{
     double tip,tap,mealcost,total;
     int ti,ta,x;
     cin>>mealcost;
     cin>>ti>>ta;
     tip=mealcost*(ti/100.00);
     //cout<<tip<<endl;
     tap=mealcost*(ta/100.00);
     // cout<<tap<<endl;
     total=mealcost+tip+tap;
     x=round(total);
     cout<<x<<endl;
}
