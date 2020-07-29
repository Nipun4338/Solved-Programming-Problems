#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2],b=0,c=0;
    cin>>a[0]>>a[1];
    if(a[0]==a[1])
    {
        cout<<"1/1"<<endl;
    }
    else
    {
        sort(a,a+2);
        b=6-a[1]+1;
        c=__gcd(b,6);
        cout<<b/c<<"/"<<6/c<<endl;
    }
    return 0;
}
