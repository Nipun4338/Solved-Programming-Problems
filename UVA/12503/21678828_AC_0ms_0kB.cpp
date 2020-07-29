/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    /*ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/

    int a,c,d[101],e,f,g=0,l=0,sum=0,h;
    string b;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>h;
        getchar();
        for(int k=0; k<h; k++)
        {
            getline(cin,b);
            //cout<<b<<endl;
            e=b.size();
            if(e==4 || e==5)
            {
                if(b=="LEFT")
                {
                    sum=sum-1;
                    d[k]=-1;
                }
                else
                {
                    sum=sum+1;
                    d[k]=1;
                }
            }
            else
            {
                //e=e-8;
                //cout<<e<<endl;
                for(int j=e-1; j>=8; j--)
                {
                    f=b[j]-'0';
                    g=g+(f*pow(10,l));
                    l++;
                }
                d[k]=d[g-1];
                //cout<<g<<endl;
                sum=sum+d[g-1];
                g=0;
                l=0;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
