/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        cout<<max((2*b)+c,(2*c)+b)<<endl;
    }
    return 0;
}
