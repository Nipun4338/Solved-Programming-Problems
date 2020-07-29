#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int check(int a)
{
    int b=1,c=0;
    while(a>0)
    {
        c=c+(a%2)*b;
        b=b*10;
        a=a/2;
    }
    return c;
}

int main()
{
    int i,j,a,b1,b2,b3,b4,d1,d2,d3,d4;
    char c1,c2,c3;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>d1;
        cin>>c1;
        cin>>d2;
        cin>>c2;
        cin>>d3;
        cin>>c3;
        cin>>d4;

        cin>>b1;
        cin>>c1;
        cin>>b2;
        cin>>c2;
        cin>>b3;
        cin>>c3;
        cin>>b4;

        if(check(d1)== b1 && check(d2)== b2 && check(d3)== b3 && check(d4)== b4)
        {
            cout<<"Case "<<i+1<<": Yes"<<endl;
        }
        else
        {
            cout<<"Case "<<i+1<<": No"<<endl;
        }
    }
    return 0;
}
