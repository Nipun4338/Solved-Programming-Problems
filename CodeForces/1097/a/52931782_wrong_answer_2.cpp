#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a,c,b[2];
    int flag;
    cin>>a>>c;
    for(int i=0; i<5; i++)
    {
        cin>>b;
        if(b[0]==a || b[1]==c)
        {
            flag=0;
        }
        else
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
