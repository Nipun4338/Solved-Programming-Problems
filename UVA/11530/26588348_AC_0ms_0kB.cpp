#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,d[27],e=1,l=0,g=0,sum=0;
    char b[27],c='a',f[101];
    cin>>a;
    getchar();
    for(int j=0; j<26; j++)
    {
        b[j]=c;
        c++;
    }
    b[26]=' ';
    for(int k=0,e=1; k<3; k++)
    {
        d[k]=e;
        e++;
    }
    for(int k=3,e=1; k<6; k++)
    {
        d[k]=e;
        e++;
    }
    for(int k=6,e=1; k<9; k++)
    {
        d[k]=e;
        e++;
    }
    for(int k=9,e=1; k<12; k++)
    {
        d[k]=e;
        e++;
    }
    for(int k=12,e=1; k<15; k++)
    {
        d[k]=e;
        e++;
    }
    for(int k=15,e=1; k<19; k++)
    {
        d[k]=e;
        e++;
    }
    for(int k=19,e=1; k<22; k++)
    {
        d[k]=e;
        e++;
    }
    for(int k=22,e=1; k<26; k++)
    {
        d[k]=e;
        e++;
    }
    d[26]=1;
    for(int i=0; i<a; i++)
    {
        gets(f);
        g=strlen(f);
        for(int l=0; l<g; l++)
        {
            for(int m=0; m<27; m++)
            {
                if(f[l]==b[m])
                {
                    sum=sum+d[m];
                }
            }
        }
        cout<<"Case #"<<i+1<<": "<<sum<<endl;
        sum=0;
        g=0;
    }
    return 0;
}