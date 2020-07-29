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

    int a;
    double b,c,d;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        if(b>0 && b<4)
        {
            printf("N\n");
        }
        else
        {
            c=(b+sqrt((b*b)-4*b))/2.0;
            d=(b-sqrt((b*b)-4*b))/2.0;
            //cout<<"Y "<<c<<" "<<d<<endl;
            printf("Y %.9f %.9f\n",c,d);
        }
    }
}
