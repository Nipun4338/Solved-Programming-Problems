#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base:: sync_with_stdio( false ); cin.tie(0); cout.tie(0);

int main()
{
    fast
    int a;
    cin>>a;
    string x;
    cin>>x;
    map<char,string>m;
    m['2']="2";
    m['3']="3";
    m['4']="322";
    m['5']="5";
    m['6']="53";
    m['7']="7";
    m['8']="7222";
    m['9']="7322";
    sort(x.rbegin(),x.rend());
    vector<char>v;
    for(int i=0; i<a; i++)
    {
        if(x[i]!='1' && x[i]!='0')
        {
            string x1=m[x[i]];
            for(int j=0; j<x1.size(); j++)
            {
                v.push_back(x1[j]);
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=v.size()-1; i>=0; i--)
    {
        cout<<v[i];
    }
    cout<<endl;
}
