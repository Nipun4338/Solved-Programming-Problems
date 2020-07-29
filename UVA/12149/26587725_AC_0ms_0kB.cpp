#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,b[300],l=0,c;
    for(int i=1; i<=200; i++)
    {
        a=a+(i*i);
        b[l]=a;
        l++;
    }
    while(cin>>c)
    {
        if(c==0)
        {
            break;
        }
        else
        {
            cout<<b[c-1]<<endl;
        }
    }
    return 0;
}