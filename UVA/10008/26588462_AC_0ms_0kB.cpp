#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,g[26]={0},h[26]={0},flag;
    char d[10000],e[26],f='a',m;
    for(int i=0; i<26; i++)
    {
        e[i]=f;
        f++;
    }
    cin>>a;
    getchar();
    for(int j=0; j<a; j++)
    {
        gets(d);
        b=strlen(d);
        for(int k=0; k<b; k++)
        {
            for(int l=0; l<26; l++)
            {
                if(e[l]==tolower(d[k]))
                {
                    g[l]++;
                    h[l]++;
                }
            }
        }
    }
    sort(h,h+26);
    for(int x=25; x>=0; x--)
    {
        for(int y=0; y<26; y++)
        {
            if(h[x]==g[y] && h[x]!=0)
            {
                cout<<(char)(e[y]-32)<<" "<<g[y]<<endl;
                g[y]=0;
                flag=0;
            }
            else if(h[x]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    return 0;
}