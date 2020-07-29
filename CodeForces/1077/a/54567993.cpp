#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e=0,f=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c>>d;
        if(d%2==1)
        {
            e=(d/2)+1;
            f=(e*b)-((d/2)*c);
            cout<<f<<endl;
            e=0;
            f=0;
        }
        else if(d%2==0)
        {
            e=d/2;
            f=(e*b)-(e*c);
            cout<<f<<endl;
            e=0;
            f=0;
        }
    }
    return 0;
}
