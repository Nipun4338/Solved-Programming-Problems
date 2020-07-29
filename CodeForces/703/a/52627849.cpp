#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x=0,y=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        if(b>c)
        {
            x++;
        }
        else if(b<c)
        {
            y++;
        }
    }
    if(x>y)
    {
        cout<<"Mishka"<<endl;
    }
    else if(x<y)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}
