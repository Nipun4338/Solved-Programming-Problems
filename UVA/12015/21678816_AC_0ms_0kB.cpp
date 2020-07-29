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

    int a,b,c=0,d[105];
    cin>>a;
    pair<int,string>p[105];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<10; j++)
        {
            cin>>p[j].second>>p[j].first;
            d[j]=p[j].first;
        }
        sort(d,d+10);
        b=d[9];
        cout<<"Case #"<<i+1<<":"<<endl;
        for(int j=0; j<10; j++)
        {
            if(b==p[j].first)
            {
                cout<<p[j].second<<endl;
            }
        }
    }
    return 0;
}