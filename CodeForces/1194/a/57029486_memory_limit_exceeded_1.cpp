/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a;
    vector<long long int>v;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        for(int j=1; j<=b; j+=2)
        {
            v.push_back(j+1);
        }
        cout<<v[c-1]<<endl;
        v.clear();
    }
    return 0;
}
