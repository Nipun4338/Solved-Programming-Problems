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

    char a[10005];
    cin>>a;
    ll d=strlen(a),flag=0;
    for(int i=1; i<d; i++)
    {
        if(a[i]!='0')
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<(d+1)/2<<endl;
    }
    else
    {
        cout<<((d+1)/2)+1<<endl;
    }
}
