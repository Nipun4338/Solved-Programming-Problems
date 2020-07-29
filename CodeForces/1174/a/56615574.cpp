/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[2005]={};
    cin>>a;
    for(int i=0; i<2*a; i++)
    {
        cin>>b[i];
    }
    sort(b,b+(2*a));
    if(b[0]==b[(2*a)-1])
    {
        cout<<"-1"<<endl;
    }
    else
    {
        for(int i=0; i<2*a; i++)
        {
            cout<<b[i];
            if(i!=(2*a)-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
