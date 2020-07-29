#include<bits/stdc++.h>
using namespace std;
int status[100000000/32];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){    return N=N | (1<<pos);}
int arr[1000000];
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
     for(i=3;i<=b;i+=2){
            if(Check(status[i/32],i%32)==0){
                arr[l]=i;
                l++;
        }
     }
}

int main()
{
    sieve();
    long long int n,rev=0,s=0,s1=0,flag=0,a;
    while(cin>>n){
            a=n;
        for(long long int i=0; i<l; i++)
        {
            if(arr[i]>=2  && arr[i]<=n)
            {
                s++;
            }
        }
        while(n!=0)
        {
            rev=rev*10;
            rev=rev+n%10;
            n=n/10;
        }
        for(long long int i=0; i<l; i++)
        {
            if(arr[i]>=2  && arr[i]<=rev)
            {
                s1++;
            }
        }
    for(long long int j=0; j<s; j++)
    {
        if(arr[j]==a)
        {
            if(rev!=a){
            for(long long int k=0; k<s1; k++)
            {
                if(rev==arr[k])
                {
                    flag=1;
                    break;
                }
                else
                {
                    flag=0;
                }
            }
            if(flag==1)
            {
                break;
            }
            if(flag=0)
            {
                break;
            }
        }
        else if(rev==a)
        {
            flag=0;
        }
        }
        else
        {
            flag=2;
        }
    }
    if(flag==0)
    {
        cout<<a<<" is prime."<<endl;
    }
    else if(flag==1)
    {
        cout<<a<<" is emirp."<<endl;
    }
    else if(flag==2)
    {
        cout<<a<<" is not prime."<<endl;
    }
    flag=0;
    rev=0;
    s=0;
    s1=0;
    }
    return 0;
}
