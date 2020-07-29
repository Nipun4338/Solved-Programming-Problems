#include<bits/stdc++.h>
using namespace std;
int status[100000000/32];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}
int arr[1000];
long long int l=0,a,b=1000,n;


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
long long int p[1000];
long long int e[1000];
int nk=0;

void decomp(long long int a)
{
    int sqrtA=sqrt(a);
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
    if(a!=1)
    {
        p[nk]=a;
        e[nk]=1;
        nk++;
    }
}

int main()
{
    sieve();
        cin>>n;
        if(n<0)
        {
            n=n*(-1);
        }
        long long int top=0;
        for(int j=1; j<=n; j++)
        {
            decomp(j);
            if(nk==2){
                top++;
            }
            nk=0;
    }
    cout<<top<<endl;
    return 0;
}