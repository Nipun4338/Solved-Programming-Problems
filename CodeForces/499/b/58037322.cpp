
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a,b;
    char c[3000][11],d[3000][11],e[3000][11];
    cin>>a>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c[i]>>d[i];
        //cout<<c[i]<<" "<<d[i]<<endl;
    }
    for(int i=0; i<a; i++)
    {
        cin>>e[i];
        //cout<<e[i]<<endl;
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(strcmp(e[i],c[j])==0 || strcmp(e[i],d[j])==0)
            {
                if(strlen(c[j])<=strlen(d[j]))
                {
                    cout<<c[j];
                    break;
                }
                else
                {
                    cout<<d[j];
                    break;
                }
            }
        }
        if(i!=a-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
}
