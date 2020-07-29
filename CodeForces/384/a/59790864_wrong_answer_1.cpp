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
    cout<<a<<endl;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            if(i==j)
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
