/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,d,e,f,g,sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c>>d;
        cin>>f>>g;
        if(g>=f)
        {
            while(b>=2 && d!=0)
            {
                sum=sum+g;
                d--;
                b-=2;
                //cout<<sum<<" "<<d<<" "<<b<<endl;
            }
            //cout<<sum<<endl;
            while(b>=2 && c!=0)
            {
                sum=sum+f;
                c--;
                b-=2;
                //cout<<sum<<" "<<d<<" "<<b<<endl;
            }
        }
        else if(g<f)
        {
            while(b>=2 && c!=0)
            {
                sum=sum+f;
                c--;
                b-=2;
                //cout<<sum<<" "<<d<<" "<<b<<endl;
            }
            //cout<<sum<<endl;
            while(b>=2 && d!=0)
            {
                sum=sum+g;
                d--;
                b-=2;
                //cout<<sum<<" "<<d<<" "<<b<<endl;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
