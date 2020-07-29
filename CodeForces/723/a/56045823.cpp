/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[3],sum=0;
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    sum=abs(a[1]-a[0])+abs(a[1]-a[2]);
    cout<<sum<<endl;
    return 0;
}
