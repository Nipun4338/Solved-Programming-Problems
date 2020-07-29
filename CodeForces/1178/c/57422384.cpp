/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> v;
int main()
{
    ll a,b;
    cin>>a>>b;
    ll sum=1;
    for(int i=0; i<a+b; i++)
    {
        sum=sum*2;
        sum=sum%998244353;
    }
    cout<<sum<<endl;
    return 0;
}
