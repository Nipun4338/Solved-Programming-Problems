/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[100005]={0};
    long double c;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        if(c>=0 && c-(int)c>=0.5000000)
        {
            b[i]=ceil(c);
        }
        else if(c<0 && c-(int)c>=-0.5000000)
        {
            b[i]=ceil(c);
        }
        else
        {
            b[i]=floor(c);
        }
    }
    for(int i=0; i<a; i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}
