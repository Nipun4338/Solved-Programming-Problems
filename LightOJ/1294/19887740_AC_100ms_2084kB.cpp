#include<iostream>
using namespace std;

int main()
{
    long long int a,b,i,c,d=0;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>b>>c;
        d=c*(b/2);
        cout<<"Case "<<i+1<<": "<<d<<endl;
        d=0;
    }
    return 0;
}