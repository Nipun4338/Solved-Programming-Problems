/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[105]={},c,mx=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        b[c]++;
        mx=max(b[c],mx);
    }
    cout<<mx<<endl;
    return 0;
}
