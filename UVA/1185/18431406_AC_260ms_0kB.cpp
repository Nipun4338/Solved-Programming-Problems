#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i,b;
    long double c=0;
    long int d=0,j;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>b;
        for(j=1,c=0; j<=b; j++)
        {
            c=c+log10(j);
        }
        d=floor(c)+1;
        cout<<d<<endl;
        c=0;
        d=0;
    }
    return 0;
}
