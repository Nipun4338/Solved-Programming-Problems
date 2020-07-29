/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
int f[10000005]={0};
int main()
{
    int a,c,l=0;
    char b[200005],d[200005],e[200005];
    cin>>a;
    memset(b,0,200005);
    //getchar();
    cin>>b;
    cin>>c;
    for(int i=0; i<c; i++)
    {
        memset(d,0,200005);
        cin>>d;
        memset(e,0,200005);
        f[1000000]={0};
        //cout<<b<<endl;
        for(int j=0; j<a; j++)
        {
            e[j]=b[j];
        }
        //cout<<b<<endl;
        for(int j=0; j<strlen(d); j++)
        {
            for(int k=0; k<a; k++)
            {
                //cout<<e[k]<<endl;
                if(d[j]==e[k])
                {
                    f[l]=k+1;
                    e[k]='0';
                    //cout<<e[k]<<endl;
                    l++;
                    break;
                }
            }
        }
        sort(f,f+l);
        cout<<f[l-1]<<endl;
        l=0;
    }
    return 0;
}
