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

void decitobinbitodeci()
{
    string binary = bitset<8>(128).to_string(); //to binary
    cout<<binary<<"\n";

    unsigned long decimal = bitset<8>(binary).to_ulong();
    cout<<decimal<<"\n";
}

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

# define M_PI           3.14159265358979323846
static double d2r(double d) {
  return (d / 180.0) * ((double) M_PI);
}

/*
1.always remember for ncr(n,2), you can calculate by->
n*(n-1)/2
2.Power of 2 ->  (1ll<<i)
*/
ll sendme[2005][100];

ll fun(ll n, ll d)
{
	if(n == 1)
        return 1;
    if(sendme[n][d]!=0)
    {
        //cout<<sendme[n][d]<<endl;
        return sendme[n][d];
    }
	if(n % 2 == 1)
	{
	    //cout<<sendme[n][d]<<endl;
		sendme[n][d]+= fun(n - 1, d) + (n - 1) * d;
	}
	else
	{
	    //cout<<sendme[n][d]<<endl;
		sendme[n][d]+= fun(n - 1, d) - (n - 1) * d;
	}
	//cout<<sendme[n][d]<<endl;
	return sendme[n][d];
}

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a,b,c,d,e;
    char x,y;
    cin>>a;
    map<char,ll>m;
    map<ll,char>m1;
    m['A']=1;
    m['B']=2;
    m['C']=3;
    m['D']=4;
    m['E']=5;
    m['F']=6;
    m['G']=7;
    m['H']=8;

    m1[1]='A';
    m1[2]='B';
    m1[3]='C';
    m1[4]='D';
    m1[5]='E';
    m1[6]='F';
    m1[7]='G';
    m1[8]='H';
    while(a--)
    {
        cin>>x>>b>>y>>c;
        if(m[x]%2!=m[y]%2 && b%2==c%2)
        {
            cout<<"Impossible"<<endl;
        }
        else if(m[x]%2==m[y]%2 && b%2!=c%2)
        {
            cout<<"Impossible"<<endl;
        }
        else
        {
            if(x==y && b==c)
            {
                cout<<0<<" "<<x<<" "<<b<<endl;
            }
            else
            {
                pair<ll,ll>p[64];
                pair<ll,ll>p1[64];
                ll temp=m[x];
                ll temp1=b;
                ll l=0,l1=0;
                for(int i=0; i<8; i++)
                {
                    temp=temp-1;
                    temp1=temp1-1;
                    if(temp>=1 && temp1>=1 && temp<=8 && temp1<=8)
                    {
                        p[l].first=temp;
                        p[l].second=temp1;
                        l++;
                    }
                }
                temp=m[x];
                temp1=b;
                for(int i=0; i<8; i++)
                {
                    temp=temp+1;
                    temp1=temp1-1;
                    if(temp>=1 && temp1>=1 && temp<=8 && temp1<=8)
                    {
                        p[l].first=temp;
                        p[l].second=temp1;
                        l++;
                    }
                }
                temp=m[x];
                temp1=b;
                for(int i=0; i<8; i++)
                {
                    temp=temp-1;
                    temp1=temp1+1;
                    if(temp>=1 && temp1>=1 && temp<=8 && temp1<=8)
                    {
                        p[l].first=temp;
                        p[l].second=temp1;
                        l++;
                    }
                }
                temp=m[x];
                temp1=b;
                for(int i=0; i<8; i++)
                {
                    temp=temp+1;
                    temp1=temp1+1;
                    if(temp>=1 && temp1>=1 && temp<=8 && temp1<=8)
                    {
                        p[l].first=temp;
                        p[l].second=temp1;
                        l++;
                    }
                }

                temp=m[y];
                temp1=c;
                for(int i=0; i<8; i++)
                {
                    temp=temp-1;
                    temp1=temp1-1;
                    if(temp>=1 && temp1>=1 && temp<=8 && temp1<=8)
                    {
                        p1[l1].first=temp;
                        p1[l1].second=temp1;
                        l1++;
                    }
                }
                temp=m[y];
                temp1=c;
                for(int i=0; i<8; i++)
                {
                    temp=temp+1;
                    temp1=temp1-1;
                    if(temp>=1 && temp1>=1 && temp<=8 && temp1<=8)
                    {
                        p1[l1].first=temp;
                        p1[l1].second=temp1;
                        l1++;
                    }
                }
                temp=m[y];
                temp1=c;
                for(int i=0; i<8; i++)
                {
                    temp=temp-1;
                    temp1=temp1+1;
                    if(temp>=1 && temp1>=1 && temp<=8 && temp1<=8)
                    {
                        p1[l1].first=temp;
                        p1[l1].second=temp1;
                        l1++;
                    }
                }
                temp=m[y];
                temp1=c;
                for(int i=0; i<8; i++)
                {
                    temp=temp+1;
                    temp1=temp1+1;
                    if(temp>=1 && temp1>=1 && temp<=8 && temp1<=8)
                    {
                        p1[l1].first=temp;
                        p1[l1].second=temp1;
                        l1++;
                    }
                }
                ll ans=0,ans1=0;
                ll flag=0,flag1=0;
                for(int i=0; i<l; i++)
                {
                    if(p[i].first==m[y] && p[i].second==c)
                    {
                        ans=m[y];
                        ans1=c;
                        flag1=1;
                        break;
                    }
                }
                if(flag1)
                {
                    cout<<1<<" "<<x<<" "<<b<<" "<<y<<" "<<c<<endl;
                    continue;
                }
                for(int i=0; i<l; i++)
                {
                    for(int j=0; j<l1; j++)
                    {
                        //cout<<p[i].first<<" "<<p[i].second<<" "<<p1[j].first<<" "<<p1[j].second<<endl;
                        if(p[i].first==p1[j].first && p[i].second==p1[j].second)
                        {
                            ans=p[i].first;
                            ans1=p1[j].second;
                            flag=1;
                            break;
                        }
                    }
                    if(flag)
                    {
                        break;
                    }
                }

                cout<<2<<" "<<x<<" "<<b<<" "<<m1[ans]<<" "<<ans1<<" "<<y<<" "<<c<<endl;
            }
        }
    }
}

/*Remember Remember, if you are so much excited that
your mind is shaking,
this is not the last contest that you are proceeding now,
if Almighty wants,
time will come.*/
