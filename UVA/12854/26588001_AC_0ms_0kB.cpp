#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,a1,b1,c1,d1,e1;
    while(cin>>a>>b>>c>>d>>e>>a1>>b1>>c1>>d1>>e1)
    {
        if(a+a1==1 && b+b1==1 && c+c1==1 && d+d1==1 && e+e1==1)
        {
            cout<<"Y"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
        a1=0;
        b1=0;
        c1=0;
        d1=0;
        e1=0;
    }
    return 0;
}