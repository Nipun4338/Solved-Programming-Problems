#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        for(int j=0; j<b; j++)
        {
            cin>>c;
            if(c>d)
            {
                d=c;
            }
        }
        cout<<"Case "<<i+1<<": "<<d<<endl;
        d=0;
    }
    return 0;
}
