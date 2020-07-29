#include<bits/stdc++.h>
using namespace std;
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

int main()
{
    sieve();
    int a;
    cin>>a;
    int prime[a+1];
    memset(prime,1,sizeof(prime));
    int counter=0;
    for(int i=2; i<=a; i++)
    {
        if(arr.find(i)!=arr.end())
        {
            counter++;
            for(int j=i; j<=a; j+=i)
            {
                prime[j]=counter;
            }
        }
    }
    for(int i=2; i<=a; i++)
    {
        cout<<prime[i]<<" ";
    }
    cout<<endl;
}