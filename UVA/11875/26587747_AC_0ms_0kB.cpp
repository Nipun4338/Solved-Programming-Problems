#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[10],d;
    double c;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        for(int j=0; j<c; j++)
        {
            cin>>b[j];
        }
        d=floor(c/2);
        cout<<"Case "<<i+1<<": "<<b[d]<<endl;
        d=0;
    }
    return 0;

}