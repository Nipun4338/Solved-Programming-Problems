#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;
    cin>>a;
    if(a==1)
    {
        cout<<"1"<<endl;
    }
    else
    {
        a=(a-1)*(a-1)+(a*a);
        cout<<a<<endl;
    }
    return 0;
}
