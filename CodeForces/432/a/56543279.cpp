/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c[2005],d=0,sum=0;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>c[i];
    }
    sort(c,c+a);
    d=b;
    for(int i=0; i<a; i++)
    {
        b=d;
        while(b!=0 && b--)
        {
            c[i]++;
        }
    }
    for(int i=0; i<a; i++)
    {
        if(c[i]<=5)
        {
            sum++;
        }
    }
    cout<<sum/3<<endl;
    return 0;
}
