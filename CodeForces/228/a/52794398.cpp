#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e=0;
    cin>>a>>b>>c>>d;
    if(a==b || a==c || a==d)
    {
        e++;
    }
    if(b==c || b==d)
    {
        e++;
    }
    if(c==d)
    {
        e++;
    }
    cout<<e<<endl;
    return 0;
}
