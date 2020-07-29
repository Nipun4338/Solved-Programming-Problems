#include<bits/stdc++.h>
using namespace std;
int status[100000000/32];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}
int arr[100];
long long int l=0,a,b=320,n;


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

int EulerPHI(long long int a)
{
    int res=a;
    int sqrtA=sqrt(a);
    for(int i=0; i<l && arr[i]<=sqrtA; i++)
    {
        int count=0;
        if(a%arr[i]==0)
        {
            while(a%arr[i]==0)
            {
                count++;
                a=a/arr[i];
            }
            sqrtA=sqrt(a);
        res=res/arr[i];
        res=res*(arr[i]-1);
        }
        sqrtA=sqrt(a);
    }
    if(a!=1)    ///for last prime
    {
        res=res/a;
        res=res*(a-1);

    }
    return res;
}

int main()
{
    sieve();
///sieve must be out of any loop
    long long int a,b,sum=0,num[100000],l=0;
    for(long long int j=1; j<=100000; j++)
    {
        sum=sum+(j-EulerPHI(j));
        num[l]=sum;
        l++;
    }
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        cout<<"Case "<<i+1<<": "<<num[b-1]<<endl;
    }
    return 0;
}