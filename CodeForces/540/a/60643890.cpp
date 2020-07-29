#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,sum=0;
    string b,c;
    cin>>a;
    cin>>b>>c;
    for(int i=0; i<a; i++)
    {
        int d=b[i]-'0';
        d++;
        int e=c[i]-'0';
        e++;
        if(abs(d-e)>5)
        {
            sum=sum+(10-abs(d-e));
        }
        else
        {
            sum=sum+abs(d-e);
        }
    }
    cout<<sum<<endl;
}
