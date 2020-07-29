#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,e,f,g[101],pay,carown;
    int sum=0;
    while(cin>>a>>b>>c>>d)
    {
        if(a<0)
        {
            break;
        }
        while(d--)
        {
            cin>>e>>f;
            for(int i=e; i<101; i++)
            {
                g[i]=f;
            }
        }
        pay=c/a;
        carown=(b+c)*(1-g[0]);
        while(carown<c)
        {
            sum++;
            c-=pay;
            carown=carown*(1-g[sum]);
        }

        cout<<sum;
        if(sum!=1)
        {
            cout<<" months"<<endl;
        }
        else
        {
            cout<<" month"<<endl;
        }
        sum=0;
    }
}