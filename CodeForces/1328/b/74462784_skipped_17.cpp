#include<bits/stdc++.h>
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define fast ios_base:: sync_with_stdio( false ); cin.tie(0); cout.tie(0);
#define eb              emplace_back
#define em              emplace
#define pb              push_back
#define Mp              make_pair
#define ff              first
#define ss              second
#define mod 1000000007
typedef long long ll;
using namespace std;
int c;
set<ll>s;
map<ll,ll>m,m1;


const int M = (int)(2e6 + 239);

void compute()
{
    ll sum=3;
    s.insert(sum);
    m[1]=sum;
    m1[sum]=1;
    ll sum1=1;
    for(int i=3; i<100005; i++)
    {
        sum1++;
        sum=sum+i;
        s.insert(sum);
        m[sum1]=sum;
        m1[sum]=sum1;
    }
    //cout<<sum<<endl;
}
// Driver code

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a,b;
    compute();
    vector<ll>v(s.begin(),s.end());
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        if(c==1)
        {
            for(int i=0; i<b-2; i++)
            {
                cout<<'a';
            }
            cout<<"bb"<<endl;
        }
        else if(s.find(c)!=s.end())
        {
            int temp=m1[c];

            for(int i=0; i<b-temp-2; i++)
            {
                cout<<'a';
            }
            cout<<"bb";
            for(int i=0; i<temp; i++)
            {
                cout<<'a';
            }
            cout<<endl;
        }
        else
        {
            int temp=upper_bound(v.begin(),v.end(),c)-v.begin();
            int temp1=v[temp]-c;
            temp=m1[v[temp]];
            temp+=2;
            int sum2=b-temp+temp1+1+1;
        
            for(int i=0; i<b-temp; i++)
            {
                cout<<'a';
            }
            cout<<'b';
            for(int i=0; i<temp1; i++)
            {
                cout<<'a';
            }
            cout<<'b';
            for(int i=0; i<b-sum2; i++)
            {
                cout<<'a';
            }
            cout<<endl;
        }
        //permute(x);
    }
}
