#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[10020],c,k=2,d=0,e=1;
    for(int i=2; i<=10000; i++)
    {
        e+=e;
        for(int j=1; j<=e; j++)
        {
            k++;
            if(k==10001)
            {
                break;
            }
            b[k]=i;
            //cout<<b[k]<<" "<<k<<endl;
        }
        if(k==10001)
            {
                break;
            }
    }
    b[0]=0;
    b[1]=0;
    b[2]=1;
    while(cin>>c)
    {
        d++;
        if(c<0)
        {
            break;
        }
        else
        {
            //cout<<d<<endl;
            cout<<"Case "<<d<<": "<<b[c]<<endl;
        }
    }
    return 0;
}