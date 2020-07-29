#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,d=0,f=0,h=0;
    char a[100000],c[100000],e[100000],g[100000],m[100000];
    gets(a);
    b=strlen(a);
    for(int i=0; i<b; i++)
    {
        if(a[i]!='a')
        {
            c[d]=a[i];
            d++;
        }
    }
    if(d%2!=0 && d!=0)
    {
        cout<<":("<<endl;
    }
    else if(d==0)
    {
        cout<<a<<endl;
    }
    else if(d%2==0)
    {
        for(int j=0; j<(d/2); j++)
        {
            e[f]=c[j];
            f++;
        }
        for(int k=b-(d/2); k<b; k++)
        {
            g[h]=a[k];
            h++;
        }
        for(int l=0; l<b-(d/2); l++)
        {
            m[l]=a[l];
        }
        if(strcmp(e,g)==0)
        {
            cout<<m<<endl;
        }
        else
        {
            cout<<":("<<endl;
        }
    }
    return 0;
}
