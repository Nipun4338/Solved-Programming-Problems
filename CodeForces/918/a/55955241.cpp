/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a=1,b=1,c=0;
    cin>>a1;
    for(int i=1; i<=a1; i++)
    {
        if(i==a)
        {
            cout<<"O";
            c=a;
            a=a+b;
            b=c;
        }
        else
        {
            cout<<"o";
        }
    }
    cout<<endl;
    return 0;
}