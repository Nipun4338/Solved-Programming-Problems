/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double a,b,c,d;
    while(cin>>a>>b)
    {
        d=(360/b*1.0)*(M_PI/180);
        c=((a*a*b)*(sin(d)))/2;
        printf("%.3f\n",c);
    }
}