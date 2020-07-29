#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0,e=0,f[1010],g=0,h=0,m=0,n=0;
    cin>>a>>b>>c;
    for(int j=0; j<a; j++)
    {
        cin>>f[j];
    }
    for(int i=0; i<b; i++)
    {
        cin>>d;
        if(d>=e)
        {
            e=d;
        }
    }
    sort(f,f+a);
    g=f[0];
    h=c/g;
    m=c%g;
    n=(e*h)+m;
    if(n>c)
    {
        cout<<n<<endl;
    }
    else
    {
        cout<<c<<endl;
    }
    return 0;
}
