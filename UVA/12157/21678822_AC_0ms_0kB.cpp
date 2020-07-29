#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0,e=0;
    double Mile=0,Juice=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        for(int j=0; j<b; j++)
        {
            cin>>c;
            Mile=Mile+(ceil(c/30.0)*10);
            Juice=Juice+(ceil(c/60.0)*15);
            if(c%30==0)
            {
                d++;
            }
            if(c%60==0)
            {
                e++;
            }
        }
        Mile=Mile+(10*d);
        Juice=Juice+(15*e);
        if(Mile<Juice)
        {
            cout<<"Case "<<i+1<<": Mile "<<Mile<<endl;
        }
        else if(Mile>Juice)
        {
            cout<<"Case "<<i+1<<": Juice "<<Juice<<endl;
        }
        else if(Mile==Juice)
        {
            cout<<"Case "<<i+1<<": Mile Juice "<<Mile<<endl;
        }
        Mile=0;
        Juice=0;
        d=0;
        e=0;
    }
    return 0;
}