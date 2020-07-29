/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
int v[1000000];
int main()
{
    int a,b,c,l=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        for(int j=1; j<=b; j+=2)
        {
            v[l]=j+1;
            l++;
        }
        cout<<v[c-1]<<endl;
        v[1000000]={};
        l=0;
    }
    return 0;
}
