/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
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
    sieve();  ///sieve must be out of any loop
    /*cout<<"Case "<<ca<<": ";
    for(int i=0; i<nk; i++)
    {
        cout<<p[i];
        cout<<" ";
    }
    cout<<endl;*/
    /*cout<<n<<":";
    for(int i=0; i<nk; i++)
    {
        for(int j=0; j<e[i]; j++){
            cout<<" ";
            cout<<p[i];
        }
    }
    cout<<endl;
    nk=0;*/
    long long int a,b=1,c,k=0,d,l=0;
    cin>>c;
    for(long long int j=0; j<c; j++)
    {
        cin>>a;
        decomp(a);
        for(int x=0; x<nk; x++)
        {
            b=b*(e[x]+1);
            //cout<<b<<endl;
        }
        if(b==3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        b=1;
        nk=0;
        l=0;
        k=0;
    }
    return 0;
}
