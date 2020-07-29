#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,d=0;
    char c[101];
    cin>>a;
    for(int i=0; i<a; i++)
    {
        for(int k=0; k<101; k++)
        {
            c[k]={};
        }
        cin>>b;
        //getchar();
        for(int j=0; j<b; j++)
        {
            cin>>c[j];
            if(c[j]=='8')
            {
                d++;
            }
        }
        //cout<<d<<endl;
        if(d>0 && b>=8)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        d=0;
    }
    return 0;
}
