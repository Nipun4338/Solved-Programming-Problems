#include<bits/stdc++.h>
using namespace std;

long long int fact(int n)
{
    long long int m=1;
    while(n!=1)
    {
        m=m*(n);
        n--;
    }
    return m;
}
int main()
{
    int a,b[26],f=0;
    long long int g=0,h=0,x=1,m=0;
    char c[27],d='A',e[21];
    for(int i=0; i<26; i++)
    {
        c[i]=d;
        d++;
    }
    cin>>a;
    getchar();
    for(int j=0; j<a; j++)
    {
        for(int l=0; l<26; l++)
        {
            b[l]=0;
        }
        gets(e);
        f=strlen(e);
        for(int k=0; k<f; k++)
        {
            for(int l=0; l<26; l++)
            {
                if(e[k]==c[l])
                {
                    b[l]++;
                }
            }
        }
        h=fact(f);
        for(int l=0; l<26; l++)
        {
            if(b[l]>0)
            {
                x=x*fact(b[l]);
            }
        }
        m=h/x;
        cout<<"Data set "<<j+1<<": "<<m<<endl;
        f=0;
        h=0;
        x=1;
        m=0;
    }
    return 0;
}
