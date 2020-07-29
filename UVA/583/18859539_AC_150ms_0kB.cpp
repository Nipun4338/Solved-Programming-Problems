#include<bits/stdc++.h>
using namespace std;
int status[100000000/32];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}
int arr[100000];
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
     for(i=3;i<=b;i+=2){
            if(Check(status[i/32],i%32)==0){
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
    int sqrtA=sqrt(a);
    //cout<<sqrtA<<endl;
            //cout<<l<<endl;
    for(int i=0; i<l && arr[i]<=sqrtA; i++)
    {
        int count1=0;
        /*for(unsigned int j=0; j<=l; j++){
            if(sqrtA=arr[j]){
                break;
                    }
                }*/
        if(a%arr[i]==0)
        {
            while(a%arr[i]==0)
            {
                count1++;
                a=a/arr[i];
            }

            if(count1>0)
            {
                p[nk]=arr[i];
                e[nk]=count1;
                nk++;
            }
        }
        sqrtA=sqrt(a);
        //cout<<sqrtA<<endl;
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
    int z;
    sieve();
    while(true){
        cin>>n;
        int sum=1;
        int y[10000],x=0;
        if(n==0)
        {
            break;
        }
        else if(n<0){
                n=n*(-1);
                decomp(n);
                cout<<(-1)*n<<" = -1 x ";
        for(int i=0; i<nk; i++)
        {
            for(int j=0; j<e[i]; j++){

                    /*if(sum){
                        cout<<p[i];
                        sum=0;
                    }
                    else
                    {
                        cout<<" x "<<p[i];
                    }*/
                    y[x]=p[i];
                    x++;
                }
        }
        for(int f=0; f<x; f++)
        {
            if(f==x-1)
            {
                cout<<y[f]<<endl;
            }
            else
            {
                cout<<y[f]<<" x ";
            }
        }
        nk=0;
        }
        else if(n>0){
                decomp(n);
                cout<<n<<" = ";
        for(int i=0; i<nk; i++)
        {
            for(int j=0; j<e[i]; j++){

                    /*if(sum){
                        cout<<p[i];
                        sum=0;
                    }
                    else
                    {
                        cout<<" x "<<p[i];
                    }*/
                    y[x]=p[i];
                    x++;
                }
        }
        for(int f=0; f<x; f++)
        {
            if(f==x-1)
            {
                cout<<y[f]<<endl;
            }
            else
            {
                cout<<y[f]<<" x ";
            }
        }
        nk=0;
        sum=0;
        }
    }
    return 0;
}
