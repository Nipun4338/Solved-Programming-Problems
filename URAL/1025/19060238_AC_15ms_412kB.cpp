#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,sum=0,sum2=0,b[101];
    cin>>a;
    sum=(a+1)/2;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    //int d=sizeof(b)/sizeof(b[0]);
    sort(b,b+a);
    /*for(int i=0; i<a; i++)
    {
        cout<<b[i]<<endl;
    }*/
    for(int i=0; i<sum; i++)
    {
        //cout<<b[i]<<endl;
        sum2=sum2+((b[i]+1)/2);
        //cout<<sum2<<endl;
    }
    cout<<sum2<<endl;
    return 0;
}
