#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d=0,e=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        d=b/3;
        e=c/3;
        cout<<d*e<<endl;
        d=0;
        e=0;
    }
    return 0;

}