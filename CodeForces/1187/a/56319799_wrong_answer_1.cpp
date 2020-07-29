/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d,e=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c>>d;
        e=b-c;
        if(e<d && e!=0)
        {
            cout<<e+1<<endl;
        }
        else
        {
            cout<<b-d+1<<endl;
        }
        e=0;
    }
    return 0;
}
