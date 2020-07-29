#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d=0,e;
    cin>>e;
    for(int i=0; i<e; i++)
    {
        cin>>a>>b>>c;
        if(a>0 && a==b && b==c)
        {
            d++;
            cout<<"Case "<<d<<": Equilateral"<<endl;
        }
        else if(a>0 && b>0 && c>0 && a+b>c && b+c>a && c+a>b && ((a==b && b!=c) || (b==c && c!=a) || (a==c && c!=b)))
        {
                d++;
                cout<<"Case "<<d<<": Isosceles"<<endl;
        }
        else if(a>0 && b>0 && c>0 && a!=b && b!=c && a!=c && a+b>c && b+c>a && c+a>b)
            {
                d++;
                cout<<"Case "<<d<<": Scalene"<<endl;
            }
        else
        {
            d++;
            cout<<"Case "<<d<<": Invalid"<<endl;
        }
    }
    return 0;

}