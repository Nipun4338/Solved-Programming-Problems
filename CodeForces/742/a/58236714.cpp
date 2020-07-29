/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a;
    cin>>a;
    if(a==0)
    {
        cout<<"1"<<endl;
    }
    else if(a%4==1)
    {
        cout<<"8"<<endl;
    }
    else if(a%4==2)
    {
        cout<<"4"<<endl;
    }
    else if(a%4==3)
    {
        cout<<"2"<<endl;
    }
    else if(a%4==0)
    {
        cout<<"6"<<endl;
    }
}
