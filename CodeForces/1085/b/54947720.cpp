#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x=0,x1=0,x2=0;
    cin>>a>>b;
    for(int i=b-1; i>=1; i--)
    {
        if(a%i==0)
        {
            x=i;
            break;
        }
    }
    cout<<(b*(a/x))+x<<endl;
    return 0;
}
