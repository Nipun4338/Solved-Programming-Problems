#include<bits/stdc++.h>
using namespace std;
//long long int N=100000000;
long long int status[100000000];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}
int arr[100000];
int l=0,a,b;


void sieve()
{
     int i,j,sqrtN;
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
     //cout<<l<<endl;
}

int p[10000];
int e[10000];
int nk=0;

void decomp(int a)
{
    int sqrtA=sqrt(a);
    for(int i=0; i<l && arr[i]<=sqrtA; i++)
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
    cin>>a;
    int z;
    int ca=0;
    for(z=0; z<a; z++)
    {
        cin>>b;
        ca++;
        sieve();
    decomp(b);
    cout<<"Case "<<ca<<": ";
    for(int i=0; i<nk; i++)
    {
        cout<<p[i];
        cout<<" ";
    /*p[i]=0;
    e[i]=0;*/
    }
    cout<<endl;
    nk=0;
    /*for(int i=0; i<nk; i++)
    {
        cout<<e[i];
        cout<<" ";
    }
    cout<<endl;*/
    }
    return 0;
}

