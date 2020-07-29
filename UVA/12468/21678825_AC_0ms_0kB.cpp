#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)
        {
            break;
        }
        else
        {
            if(abs(a-b)>50)
            {
                cout<<abs(100-abs(a-b))<<endl;
            }
            else if(abs(a-b)<=50)
            {
                cout<<abs(b-a)<<endl;
            }
        }
    }
    return 0;

}