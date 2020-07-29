#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=0,e=0,x[26],y[26],flag,l=0,l1=0,k1=0;
    char c[100005],d[100005],f[26],h='a',m[100005],n[100005],g[26],g1[26];
    cin>>a;
    for(int i=0; i<a; i++)
    {
        memset(c,0,sizeof(c));
        memset(d,0,sizeof(d));
        cin>>c>>d;
        b=strlen(c);
        e=strlen(d);
        memset(m,0,sizeof(m));
        memset(n,0,sizeof(n));
        h='a';
        for(int j=0; j<26; j++)
        {
            f[j]=h;
            g[j]=h;
            //cout<<g[j]<<endl;
            g1[j]=h;
            h++;
        }
        for(int j=0; j<26; j++)
        {
            x[j]=0;
            y[j]=0;
        }
        for(int j=0; j<26; j++)
        {
            for(int k=0; k<b; k++)
            {
                if(f[j]==c[k])
                {
                    x[j]++;
                }
            }
        }
        for(int j=0; j<26; j++)
        {
            for(int k=0; k<e; k++)
            {
                if(f[j]==d[k])
                {
                    y[j]++;
                }
            }
        }
        for(int j=0; j<26; j++)
        {
            if(x[j]<=y[j] && x[j]!=0)
            {
                flag=0;
            }
            else if(x[j]==0 && y[j]==0)
            {
                flag=0;
            }
            else
            {
                flag=1;
                break;
            }
        }
        //cout<<c<<" "<<d<<endl;
        for(int j=0; j<b; j++)
        {
            if(c[j]!=c[j+1])
            {
                m[l]=c[j];
                l++;
            }
        }
        for(int j=0; j<e; j++)
        {
            if(d[j]!=d[j+1])
            {
                n[l1]=d[j];
                l1++;
            }
        }
        m[l]='\0';
        n[l1]='\0';
        //cout<<m<<" "<<n<<endl;
        if(flag==0 && strcmp(m,n)==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        b=0;
        e=0;
        l=0;
        l1=0;
    }
    return 0;
}
