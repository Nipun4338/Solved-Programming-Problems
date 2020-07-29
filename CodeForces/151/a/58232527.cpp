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
    ll n,k,l,c,d,p,nl,np,a,b,a1,b1;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a=(k*l)/nl;
    b=c*d;
    a1=p/np;
    b1=(min(a,min(b,a1)))/n;
    cout<<b1<<endl;
}

