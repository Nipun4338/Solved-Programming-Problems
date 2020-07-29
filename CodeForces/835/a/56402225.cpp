/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,a1=0,b1=0;
    cin>>a>>b>>c>>d>>e;
    a1=(a*b)+(2*d);
    b1=(a*c)+(2*e);
    if(a1<b1)
    {
        cout<<"First"<<endl;
    }
    else if(a1>b1)
    {
        cout<<"Second"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}
