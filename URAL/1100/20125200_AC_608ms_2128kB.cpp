/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

struct Interval
{
    int id,m;
}a[150005];

bool compareInterval(Interval i1, Interval i2)
{
    return (i1.m>i2.m);
}

int main()
{
    int b;
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>a[i].id>>a[i].m;
    }
    stable_sort(a,a+b,compareInterval);
    for(int i=0; i<b; i++)
    {
        cout<<a[i].id<<" "<<a[i].m<<endl;
    }
    return 0;
}

