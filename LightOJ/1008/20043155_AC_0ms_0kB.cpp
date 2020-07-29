#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,d=0,ext,e=0,f=0;
    double c=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        c=sqrt(b);
        if(c>(int)sqrt(b))
        {
            e=ceil(c);
        }
        else
        {
            e=c;
        }
        f=e;
        ext=(e*e)-b;
        if(ext<e)
        {
            d=ext+1;
            e=e;
        }
        else
        {
            d=e;
            e=b-((e-1)*(e-1));
        }
        if(f%2==0)
        {
            swap(e,d);
        }
        cout<<"Case "<<i+1<<": "<<d<<" "<<e<<endl;
        e=0;
        d=0;
        c=0;
        f=0;
    }
	return 0;
}
