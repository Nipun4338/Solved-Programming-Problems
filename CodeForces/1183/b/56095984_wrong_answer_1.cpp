/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,d[105]={0},c;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        for(int j=0; j<b; j++)
        {
            cin>>d[j];
        }
        sort(d,d+b);
        if(d[0]+c<d[b-1]-c)
        {
            cout<<"-1"<<endl;
        }
        else if(d[0]==d[b-1])
        {
            cout<<d[0]<<endl;
        }
        else
        {
            cout<<d[0]+c<<endl;
        }
        d[105]={0};
    }
    return 0;
}
