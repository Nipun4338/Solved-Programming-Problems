#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b[100005],c[100005],l=0,sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<a; i++)
    {
        if(b[i]<=b[i+1])
        {
            sum++;
        }
        else
        {
            c[l]=sum+1;
            l++;
            sum=0;
        }
    }
    sort(c,c+l);
    cout<<c[l-1]<<endl;
    return 0;
}
