/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a;
    vector<int>v(101);
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v[b]++;
    }
    sort(v.begin(),v.end());
    cout<<v[100]<<endl;
    return 0;
}
