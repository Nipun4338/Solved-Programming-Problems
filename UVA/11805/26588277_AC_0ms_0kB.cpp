#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e=0,f=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c>>d;
        e=d%b;
        f=e+c;
        if(f<=b){
        cout<<"Case "<<i+1<<": "<<f<<endl;
        }
        else
        {
            f=e-(b-c);
            cout<<"Case "<<i+1<<": "<<f<<endl;
        }
        e=0;
        f=0;
    }
    return 0;
}