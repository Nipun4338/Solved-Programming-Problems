#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,c[100],f,e,x1=0;
    char b[100][100],d[100],g[100][100];

    while(cin>>a)
    {
        x1++;
        if(x1>=2)
        {
            cout<<endl;
        }
        for(int i=0; i<a; i++)
        {
            cin>>b[i];
            c[i]=0;
        }
        for(int i=0; i<a; i++)
        {
            cin>>d>>e>>f;
            if(f!=0)
            {
                for(int j=0; j<f; j++)
                {
                    cin>>g[j];
                }
                for(int j=0; j<a; j++)
                {
                    if(strcmp(d,b[j])==0)
                    {
                        int z=(e/f)*f;
                        c[j]=c[j]-z;
                        //cout<<c[j]<<endl;
                        break;
                    }
                }
                int x=e%f;
                x=e/f;
                for(int j=0; j<f; j++)
                {
                    for(int k=0; k<a; k++)
                    {
                        if(strcmp(g[j],b[k])==0)
                        {
                            c[k]=c[k]+x;
                            break;
                        }
                    }
                }
            }
        }
        for(int i=0; i<a; i++)
        {
            cout<<b[i]<<" "<<c[i]<<endl;
        }
    }
}
