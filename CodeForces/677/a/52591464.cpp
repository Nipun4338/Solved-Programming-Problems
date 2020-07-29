#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0,e=0;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        if(c<=b)
        {
            d++;
        }
        else if(c>b)
        {
            e+=2;
        }
    }
    cout<<d+e<<endl;
    return 0;
}
