#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,e=0,flag,d=0;
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
        }
        for(int j=0; j<b; j++)
        {
            if(c[j]=='8')
            {
                e=j+1;
                flag=1;
                break;
            }
            else
            {
                e=0;
                flag=0;
            }
        }
        //cout<<e<<" "<<b-e<<endl;
        d=b-e;
        //cout<<d<<" "<<b-d<<endl;
        if(flag==1 && d>=10)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        e=0;
        d=0;
    }
    return 0;
}
