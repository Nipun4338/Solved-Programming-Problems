#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[20],d=0,f=0;
    long long int c=1,e[10000];
    while(cin>>a)
    {
        d++;
        for(int i=0; i<a; i++)
        {
            cin>>b[i];
        }
        for(int j=0; j<a; j++)
        {
            for(int k=j; k<a; k++)
            {
                if(b[k]==0)
                {
                    break;
                }
                c=c*b[k];
                e[f]=c;
                f++;
            }
            c=1;
        }
        sort(e,e+f);
        if(e[f-1]>0)
        {
            cout<<"Case #"<<d<<": The maximum product is "<<e[f-1]<<"."<<endl<<endl;
        }
        else
        {
            cout<<"Case #"<<d<<": The maximum product is 0."<<endl<<endl;
        }
        c=1;
        f=0;
    }
    return 0;
}