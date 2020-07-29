#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base:: sync_with_stdio( false ); cin.tie(0); cout.tie(0);
int status[100000000/32];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){ return N=N | (1<<pos);}
long long int arr[10000000];
long long int l=0,a,b=100000,n;


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
    for(i=3;i<=b;i+=2)
    {
        if(Check(status[i/32],i%32)==0)
        {
            arr[l]=i;
            l++;
        }
     }
}


long long int p[10000];
long long int e[10000];
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
    fast
    sieve();  ///sieve must be out of any loop
    set<ll>s;
    //cout<<arr[l-1]<<endl;
    map<ll,ll>m;
    long long int a=1,b=1,k=0,c,d=1,l=0;
    for(int i=0; i<10; i++)
    {
        cin>>c;
        decomp(c);
        for(int j=0; j<nk; j++)
        {
            m[p[j]]+=e[j];
            //cout<<p[j]<<" "<<m[p[j]]<<endl;
            s.insert(p[j]);
        }
        nk=0;

    }
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        m[*it]++;
        b*=m[*it];
    }
    cout<<b%10<<endl;
    return 0;
}