#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,d=0,e=0,flag=0;
    char b[20],c[20];
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        cin>>c;
        d=strlen(b);
        e=strlen(c);
        for(int j=0; j<d; j++)
        {
            if(b[j]=='a' || b[j]=='e' || b[j]=='i' || b[j]=='o' || b[j]=='u')
            {
                b[j]=0;
                c[j]=0;
            }
        }
        for(int k=0; k<e; k++)
        {
            if(b[k]!=c[k])
            {
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        if(d==e && flag==0)
        {
            cout<<"Yes"<<endl;
        }
        else if(d!=e || flag==1)
        {
            cout<<"No"<<endl;
        }
        flag=0;
        d=0;
        e=0;
    }
    return 0;
}