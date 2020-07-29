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

    ll a;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        string b;
        cin>>b;
        if(b=="1" || b=="4" || b=="78")
        {
            cout<<"+"<<endl;
        }
        else if(b[b.size()-1]=='5' && b[b.size()-2]=='3')
        {
            cout<<"-"<<endl;
        }
        else if(b[0]=='9' && b[b.size()-1]=='4')
        {
            cout<<"*"<<endl;
        }
        else if(b[0]=='1' && b[1]=='9' && b[2]=='0')
        {
            cout<<"?"<<endl;
        }
        else
        {
            cout<<"?"<<endl;
        }
    }
    return 0;
}