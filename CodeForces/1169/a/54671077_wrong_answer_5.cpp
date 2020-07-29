#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,flag;
    cin>>a>>b>>c>>d>>e;
    for(int i=0; i<a; i++)
    {
        if(b==d)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
        b++;
        d--;
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else if(flag==0)
    {
        if(c==e)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
