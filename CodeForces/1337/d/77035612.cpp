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

const int M = (int)(2e6 + 239);

int getnum(string a)
{
    int i,p=0;
    rep0(i,a.size())
    {
        p*=10;
        p+=a[i]-'0';
    }
    return p;
}

int status[100000000/32];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}
set<int>arr;
long long int l=0,a,b=10000000,n;


void sieve()
{
     long long int i,j,sqrtN;
     sqrtN = int( sqrt( b ) );
     for( i=3; i<=sqrtN; i+=2 )
     {
		 if( Check(status[i/32],i%32)==0)
		 {
	 		 for(j=i*i; j<=b; j+=2*i)
			 {
				 status[j/32]=Set(status[j/32],j%32);
	 		 }
		 }
    }
    arr.insert(2);
    l=1;
     for(i=3;i<=b;i+=2){
            if(Check(status[i/32],i%32)==0){
                arr.insert(i);
                l++;
        }
     }
}
ll temp=9e18;
void solve(vector<ll>x, vector<ll>y, vector<ll>z)
{
    for(int i=0; i<x.size(); i++)
    {
        auto temp1=lower_bound(all(y),x[i]);
        auto temp2=upper_bound(all(z),x[i]);
        if(temp1==y.end() || temp2==z.begin())
        {
            continue;
        }
        temp2--;
        ll temp3=((x[i]-*temp1)*(x[i]-*temp1))+((*temp1-*temp2)*(*temp1-*temp2))+((*temp2-x[i])*(*temp2-x[i]));
        //cout<<temp3<<endl;
        temp=min(temp,temp3);
    }
}

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a,nr,ng,nb;
    cin>>a;
    while(a--)
    {
        temp=9e18;
        cin>>nr>>ng>>nb;
        vector<ll>x,y,z;
        for(int i=0; i<nr; i++)
        {
            cin>>b;
            x.push_back(b);
        }
        for(int i=0; i<ng; i++)
        {
            cin>>b;
            y.push_back(b);
        }
        for(int i=0; i<nb; i++)
        {
            cin>>b;
            z.push_back(b);
        }
        sort(all(x));
        sort(all(y));
        sort(all(z));
        solve(x,y,z);
        solve(y,x,z);
        solve(z,y,x);
        solve(x,z,y);
        solve(y,z,x);
        solve(z,x,y);
        cout<<temp<<endl;
    }

}
