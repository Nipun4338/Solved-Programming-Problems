#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,d,e;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c>>d>>e;
        int temp1,temp2,temp3,temp4;
        temp1=(d)*(c);
        temp2=(b-d-1)*(c);
        temp3=b*(e);
        temp4=(c-e-1)*b;
        cout<<max(max(temp3,temp4),max(temp1,temp2))<<endl;

    }
}
