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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin>>a;
    if(a%2==0)
    {
        cout<<(a*a)/2<<endl;
    }
    else
    {
        cout<<((a*a)+1)/2<<endl;
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            if((i+j)%2==0)
            {
                cout<<"C";
            }
            else
            {
                cout<<".";
            }
        }
        if(i!=a-1)
        {
            cout<<endl;
        }
    }
    //cout<<endl;
    return 0;
}
