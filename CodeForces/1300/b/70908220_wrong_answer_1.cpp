#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
const ll inf = 1e9;
const ll mod = 1e9 + 7;
const double eps = 1e-8;
const ll MAX = 1e7 + 20;
#define fast ios_base:: sync_with_stdio( false ); cin.tie(0); cout.tie(0);
#define eb              emplace_back
#define em              emplace
#define pb              push_back
#define Mp              make_pair
#define ff              first
#define ss              second
#define all(a)          a.begin(),a.end()
#define rep(i,n)        for(int i=0;i<n;i++)
#define rep1(i,n)       for(int i=1;i<=n;i++)
#define rrep(i,a,n)     for(int i=a;i<=n;i++)
#define per(i,n,a)      for(int i=n;i>=a;i--)
#define pf(n)           printf("%lld",n)
#define pfi(n)          printf("%d",n)
#define sp              printf(" ")
#define ln              "\n"

#define pi acos(-1.0)
#define mod 1000000007

///Library
#define mem(a,b) memset(a,b,sizeof(a))
#define Sort(x) sort(x.begin(),x.end())
#define Reverse(x) reverse(x.begin(),x.end())
#define SortA(ar,s) sort(ar,ar+s)
#define SortD(ar,s) sort(ar,ar+s,greater<int>())
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define sq(x) (x)*(x)


///vector
#define Lower_bound(vec,value) lower_bound(vec.begin(),vec.end(),value)
#define Upper_bound(vec,value) upper_bound(vec.begin(),vec.end(),value)


//template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
//template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    fast
    ll a,b,c,d;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        vector<ll>v,v1,v2;
        for(int j=0; j<2*b; j++)
        {
            cin>>c;
            v.push_back(c);
        }
        sort(v.begin(),v.end());
        for(int j=0; j<v.size(); j++)
        {
            if(j%2==1)
            {
                v2.push_back(v[j]);
            }
            else
            {
                v1.push_back(v[j]);
            }
        }
        vector<ll>v3;
        v3.push_back(abs(v1[(b/2)]-v2[(b/2)]));
        if(b>1)
        {
            ll c=1,d=b+(b/2);
            while(c<b-1)
            {
                v3.push_back(abs(v[c]-v[b]));
                c++;
                d++;
            }
            d=(2*b)-1;
            c=b-(b/2);
            while(c>0)
            {
                v3.push_back(abs(v[c]-v[b]));
                c--;
                d--;
            }
            c=b-1;
            d=b+(b/2)+1;
            while(c<=b)
            {
                v3.push_back(abs(v[c]-v[d]));
                c++;
                d++;
            }
            v3.push_back(abs(v[b]-v[b-2]));
            sort(v3.begin(),v3.end());
            cout<<v3[0]<<endl;
        }
        else
        {
            cout<<abs(v[0]-v[1])<<endl;
        }
    }
}
