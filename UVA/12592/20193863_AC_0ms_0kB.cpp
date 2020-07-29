/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, string> m;
    int a,b;
    char c[150],d[150],e[150];
    cin>>a;
    getchar();
    for(int i=0; i<a; i++)
    {
        gets(c);
        gets(d);
        m[c]=d;
    }
    cin>>b;
    getchar();
    for(int i=0; i<b; i++)
    {
        gets(e);
        cout<<m[e]<<endl;
    }
    return 0;
}
