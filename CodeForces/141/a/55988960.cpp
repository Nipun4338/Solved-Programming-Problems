/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,d;
    cin>>b>>c>>d;
    a=b+c;
    sort(a.begin(),a.end());
    sort(d.begin(),d.end());
    if(a==d)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

