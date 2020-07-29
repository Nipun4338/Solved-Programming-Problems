
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,d=0,f[30]={0},g=0;
    char b[210],c[30],e='`';
    for(int k=0; k<26; k++)
    {
        e++;
        c[k]=e;
    }
    cin>>a;
    getchar();
    for(int i=0; i<a; i++)
    {
        gets(b);
        d=strlen(b);
        for(int j=0; j<d; j++)
        {
            b[j]=tolower(b[j]);
            for(int k=0; k<26; k++)
            {
                if(b[j]==c[k])
                {
                    f[k]++;
                }
            }
        }
        for(int k=0; k<26; k++)
        {
            if(f[k]>=g)
            {
                g=f[k];
            }
        }
        for(int l=0; l<26; l++)
        {
            if(f[l]==g)
            {
                cout<<c[l];
            }
        }
        cout<<endl;
        for(int k=0; k<26; k++)
        {
            f[k]=0;
        }
        d=0;
        g=0;
    }
    return 0;
}