#include<bits/stdc++.h>
using namespace std;
int status[100000000/32];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}
int arr[100000];
long long int l=0,a,b=320000,n;


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

int p[10000];
int e[10000];
int nk=0;

int EulerPHI(long long int a)
{
    int res=a;
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

            /*if(count>0)
            {
                p[nk]=arr[i];
                e[nk]=count;
                nk++;
            }*/
            sqrtA=sqrt(a);
        res=res/arr[i];
        res=res*(arr[i]-1);
        }
        sqrtA=sqrt(a);
    }
    if(a!=1)    ///for last prime
    {
//       p[nk]=a;
//       e[nk]=1;
//        nk++;
        res=res/a;
        res=res*(a-1);

    }
    return res;
}

int main()
{
        sieve();
///sieve must be out of any loop
    int a;
    while(true){
    cin>>a;
    if(a==0)
    {
        break;
    }
    else if(a==1)
    {
        cout<<"0"<<endl;
    }
    else{
        cout<<EulerPHI(a)<<endl;
        }
    }
    return 0;
}
