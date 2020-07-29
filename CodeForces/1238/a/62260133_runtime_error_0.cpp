#include<bits/stdc++.h>
using namespace std;
int status[100000000/32];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}
int arr[10000000];
long long int l=0,a,b=100000000,n;


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
    long long int x,y,z;
    cin>>x;
    for(int i=0; i<x; i++)
    {
        cin>>y>>z;
        z=y-z;
        int flag=0;
        for(int j=0; j<=l; j++)
        {
            if(z%arr[j]==0)
            {
                flag=1;
                break;
            }
            flag=0;
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
