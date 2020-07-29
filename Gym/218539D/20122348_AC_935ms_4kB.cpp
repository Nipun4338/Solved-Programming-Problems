/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int a,b,c,sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        for(int j=0; j<b; j++)
        {
            cin>>c;
            c=c%1000000007;
            sum=(sum+c)%1000000007;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
