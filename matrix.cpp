#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[100][100],b[100][100],r,c,n,i,j,m,s[100][100],mn[100][100],k,mz[100][100],tran[100][100];
    int x;
    cin>>r>>c;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>b[i][j];
        }
    }
    cin>>x;
    switch(x)
    {
    case 1:
    {
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                s[i][j]=arr[i][j]+b[i][j];
            }
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                cout<<s[i][j]<<" ";
            }
            cout<<endl;
        }
        break;
    }
    case 2:
    {
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                mn[i][j]=arr[i][j]-b[i][j];
            }
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                cout<<mn[i][j]<<" ";
            }
            cout<<endl;
        }
        break;
    }
    case 3:
    {
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                mz[i][j]=0;
            }
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                m=0;
                for(k=0; k<c; k++)
                {
                    m=m+arr[i][k]*b[k][j];
                    mz[i][j]=m;
                }
            }
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                cout<< mz[i][j]<<" ";
            }
            cout<<endl;
        }
        break;
    }
   case 4:
     {
           for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                tran[j][i]=arr[i][j];
            }
        }
         for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                cout<<tran[i][j]<<" ";
            }
            cout<<endl;
        }
        break;
     }
    }
}

