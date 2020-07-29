#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[10001],c,d=0,e=0,f=0,g=1000001;
    while(cin>>a)
    {
        for(int i=0; i<a; i++)
        {
            cin>>b[i];
        }
        cin>>c;
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<a; j++)
            {
                f=abs(b[i]-b[j]);
                if(b[i]+b[j]==c && f<=g)
                {
                    d=b[i];
                    e=b[j];
                    g=f;
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<min(d,e)<<" and "<<max(d,e)<<"."<<endl<<endl;
        d=0;
        e=0;
        f=0;
        g=1000001;
    }
    return 0;
}