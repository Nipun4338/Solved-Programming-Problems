#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> VI;
typedef pair<int,int> PII;

int main()
{
    int a,b,c,j=0,sum=1,ans;
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        ans=c;
        while(ans%b!=0)
        {
            ans=(ans*10+c)%b;
            sum++;
            //cout<<ans<<endl;
        }
        cout<<"Case "<<++j<<": "<<sum<<endl;;
        sum=1;
    }
	return 0;
}
