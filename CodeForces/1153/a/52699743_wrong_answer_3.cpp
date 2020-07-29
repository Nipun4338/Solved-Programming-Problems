#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c[100],d[100],e=0,flag=0,f[100],g[100];
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>c[i]>>d[i];
        f[i]=c[i];
        g[i]=d[i];
    }
    sort(c,c+a);
    if(c[0]>b){
    for(int i=0; i<a; i++)
    {
        if(c[0]==c[i])
        {
            cout<<i+1<<endl;
            break;
        }
    }
    }
    else if(c[0]<=b)
    {
        for(int i=0; i<a; i++)
        {
            if(f[i]==b)
            {
                cout<<i+1<<endl;
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            sort(d,d+a);
            for(int i=0; i<a; i++)
            {
                if(d[0]==g[i])
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}
