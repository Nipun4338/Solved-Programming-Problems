#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[105],c=0,sum=0,sum1=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
        sum=sum+b[i];
    }
    c=sum/2;
    sort(b,b+a);
    for(int i=0; i<a; i++)
    {
        sum1=sum1+b[i];
        if(sum1>c)
        {
            c=i+1;
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}
