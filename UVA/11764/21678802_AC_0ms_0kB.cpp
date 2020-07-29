#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c[50],d=0,e=0,f=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        for(int j=0; j<b; j++)
        {
            cin>>c[j];
        }
        d=c[0];
        for(int j=0; j<b-1; j++)
        {
            if(c[j+1]>d)
            {
                d=c[j+1];
                e++;
            }
            if(c[j+1]<d)
            {
                d=c[j+1];
                f++;
            }
        }
        cout<<"Case "<<i+1<<": "<<e<<" "<<f<<endl;
        e=0;
        f=0;
        d=0;
    }
    return 0;

}