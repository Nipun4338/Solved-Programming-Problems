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
const double pi = 3.14159265358979323846;
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

int main()
{
    fast

    ll a,b,c;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vector<ll>v,v2;
        multiset<ll>s1;
        set<ll>s2,ss;
        ll flag3=0;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v.push_back(c);
            s1.insert(c);
            ss.insert(c);
        }
        vector<ll>v1(all(ss));
        for(int i=0; i<v1.size(); i++)
        {
            if(s1.count(v1[i])>2)
            {
                flag3=1;
                break;
            }
        }
        if(flag3)
        {
            cout<<0<<endl;
            continue;
        }
        multiset<ll>s;
        ll temp=-1,flag=0,temp1=-1,temp2=-1;
        for(int i=0; i<b; i++)
        {
            temp1=max(v[i],temp1);
            if(s.find(v[i])==s.end())
            {
                s.insert(v[i]);
            }
            else
            {
                temp=i;
                break;
            }
        }
        multiset<ll>sx;
        for(int i=temp1; i<v.size(); i++)
        {
            temp2=max(temp2,v[i]);
            sx.insert(v[i]);
        }
        if(temp1!=s.size() || temp2!=sx.size())
        {
            flag=1;
        }
        multiset<ll>s3;
        ll temp3=-1;
        temp1=-1;
        temp2=-1;
        ll flag2=0;
        for(int i=b-1; i>=0; i--)
        {
            temp1=max(temp1,v[i]);
            if(s3.find(v[i])==s3.end())
            {
                s3.insert(v[i]);
            }
            else
            {
                temp3=i;
                break;
            }
        }
        multiset<ll>sy;
        for(int i=temp3; i>=0; i--)
        {
            temp2=max(temp2,v[i]);
            sy.insert(v[i]);
        }
        if(temp1!=s3.size() || temp2!=sy.size())
        {
            flag2=1;
        }
        if(flag && flag2)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if(!flag && !flag2 && temp!=temp3+1)
            {
                cout<<2<<endl;
                cout<<temp<<" "<<v.size()-temp<<endl;
                cout<<temp3+1<<" "<<v.size()-temp3-1<<endl;
            }

            else
            {
                cout<<1<<endl;
                if(flag2)
                {
                    cout<<temp<<" "<<v.size()-temp<<endl;
                }
                else
                {
                    cout<<temp3+1<<" "<<v.size()-temp3-1<<endl;
                }
            }
        }
    }
}
