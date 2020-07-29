/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Gcd(ll a, ll b)
{
    if(b==0)
    {
        return a;
    }
    return Gcd(b,a%b);
}

ll Lcm(ll a, ll b)
{
    return ((a/Gcd(a,b))*b);
}


int status[100000000/32];
bool Check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
long long int arr[10000000];
long long int l=0,a,b=1000000,n;


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
    arr[0]=2;
    l=1;
    for(i=3; i<=b; i+=2)
    {
        if(Check(status[i/32],i%32)==0)
        {
            arr[l]=i;
            l++;
        }
    }
}

long long int p[1000000];
long long int e[1000000];
int nk=0;

void decomp(long long int a)
{
    long long int sqrtA=sqrt(a);
    for(long long int i=0; i<l && arr[i]<=sqrtA; i++)
    {
        int count=0;
        /*if(Check(status[a/32],a%32)==0)
        {
            break;
        }*/
        if(a%arr[i]==0)
        {
            while(a%arr[i]==0)
            {
                count++;
                a=a/arr[i];
            }

            if(count>0)
            {
                p[nk]=arr[i];
                e[nk]=count;
                nk++;
            }
        }
        sqrtA=sqrt(a);
    }
    if(a!=1)    ///for last prime
    {
        p[nk]=a;
        e[nk]=1;
        nk++;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();
    ll a,b,c,d=1;
    cin>>a;
    vector<ll>v;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    c=v[0];
    for(int i=0; i<a; i++)
    {
        c=Gcd(c,v[i]);
    }
    decomp(c);
    for(int x=0; x<nk; x++)
    {
        d=d*(e[x]+1);
        //cout<<b<<endl;
    }
    cout<<d<<endl;
}


