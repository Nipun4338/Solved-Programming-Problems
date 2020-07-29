#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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

template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast

    int a,b,c,d=0,e=0,f=0,flag;
    cin>>a;
    vector<int>v;
    for(int i=0; i<a; i++)
    {
    	cin>>b;
    	v.push_back(b);
    }
    for(int i=0; i<a; i++)
    {
    	if(v[i]==25)
    	{
    		d++;
    	}
    	if(v[i]==50)
    	{
    		e++;
    	}
    	else
    	{
    		f++;
    	}
    	if(v[i]==50 && d==0)
    	{
    		flag=1;
    		break;
    	}
    	else if(v[i]==50 && d!=0)
    	{
    		//flag=0;
    		d--;
    	}
    	else if(v[i]==100 && (d<3 || (e<1 && d!=1)))
    	{
    		flag=1;
    		break;
    	}
    	else if(v[i]==100 && (d>=3 || (e>=1 && d!=0)))
    	{
    		if(e>=1 && d!=0)
    		{
    			e--;
    			d--;
    		}
    		else
    		{
    			d-=3;
    		}
    	}
    	flag=0;
    }
    if(flag)
    {
    	cout<<"NO"<<ln;
    }
    else
    {
    	cout<<"YES"<<ln;
    }
}
