#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100000],b[100000],f[100000];
    int l=0,c=0,d=0,n=0;
    while(gets(f))
    {
        for(int i=0; i<100000; i++)
        {
            a[i]={};
        }
        for(int i=0; i<100000; i++)
        {
            b[i]={};
        }
        for(int y=0; f[y]!=' '; y++)
        {
            a[y]=f[y];
        }
        c=strlen(a);
        for(int z=c+1; f[z]!='\n'; z++)
        {
            b[n]=f[z];
            n++;
        }
        d=strlen(b);
        for(int i=0,z1=0; i<c; i++)
        {
            for(int j=z1; j<d; j++)
            {
                if(a[i]==b[j])
                {
                    l++;
                    z1=j+1;
                    break;
                }
            }
        }
        if(c!=l)
        {
            cout<<"No"<<endl;
        }
        else if(c==l)
        {
            cout<<"Yes"<<endl;
        }
        l=0;
        c=0;
        d=0;
        n=0;
    }
    return 0;
}