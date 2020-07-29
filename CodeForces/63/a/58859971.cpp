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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    pair<string,string> p[101];
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    for(int j=0; j<a; j++)
    {
        if(p[j].second=="rat")
        {
            cout<<p[j].first<<endl;
            //p[j].second='0';
        }
    }
    for(int j=0; j<a; j++)
    {
        if(p[j].second=="woman" || p[j].second=="child")
        {
            cout<<p[j].first<<endl;
            //p[j].second='0';
        }
    }
    for(int j=0; j<a; j++)
    {
        if(p[j].second=="man")
        {
            cout<<p[j].first<<endl;
            //p[j].second='0';
        }
    }
    for(int j=0; j<a; j++)
    {
        if(p[j].second=="captain")
        {
            cout<<p[j].first<<endl;
            //p[j].second='0';
        }
    }
}

