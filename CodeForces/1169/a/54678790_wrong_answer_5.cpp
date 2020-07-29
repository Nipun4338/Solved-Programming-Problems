#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,flag,b1,d1;
    cin>>a>>b>>c>>d>>e;
    b1=b;
    d1=d;
    for(int i=0; i<a-2; i++)
    {
        b1++;
        d1--;
        //cout<<b1<<" "<<d1<<endl;
        if(b1==d1)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else if(flag==0)
    {
        if(c==e || b==d)
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
