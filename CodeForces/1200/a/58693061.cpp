#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string g;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,d;
    string b;
    vector<int>v;
    for(int i=0; i<10; i++)
    {
        v.push_back(0);
    }
    cin>>a;
    //getchar();
    cin>>b;
    for(int i=0; i<a; i++)
    {
        if(b[i]=='L')
        {
            for(int j=0; j<10; j++)
            {
                if(v[j]==0)
                {
                    v[j]=1;
                    break;
                }
            }
        }
        else if(b[i]=='R')
        {
            for(int j=9; j>=0; j--)
            {
                if(v[j]==0)
                {
                    v[j]=1;
                    break;
                }
            }
        }
        else if(b[i]>='0' && b[i]<='9')
        {
            int d=b[i]-'0';
            //cout<<d<<endl;
            v[d]=0;
        }
    }
    for(int i=0; i<10; i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    return 0;
}
