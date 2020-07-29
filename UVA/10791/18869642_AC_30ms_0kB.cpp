#include<bits/stdc++.h>
using namespace std;
int status[100000000/32];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}
int arr[10000000];
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
    arr[0]=2;
    l=1;
     for(i=3;i<=b;i+=2){
            if(Check(status[i/32],i%32)==0){
                arr[l]=i;
                l++;
        }
     }
}
long long int p[100000000];
long long int e[100000000];
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

int t=1;
int main()
{
    sieve();
    while(true){
        cin>>n;
        long long int sum=0,s=0;
        int flag=1;
        if(n==0)
        {
            break;
        }
    decomp(n);
    for(long long int i=0; i<nk; i++)
    {
        //for(long long int j=0; j<e[i]; j++){
            if(n==p[i])
            {
                s=p[i];
                flag=0;
                break;
            }
            if(nk==1)
                {
                    //cout<<p[i]<<" "<<e[i]<<" "<<s<<endl;
                    sum=pow(p[i],e[i]);
                    s=sum;
                    //cout<<s<<endl;
                    flag=0;
                    //cout<<p[i]<<" "<<e[i]<<" "<<s<<endl;
                    break;
                }
            else if(nk>1 && n!=1)
            {
                sum=sum+pow(p[i],e[i]);
                //cout<<p[i]<<" "<<e[i]<<" "<<sum<<endl;
                flag=1;
            }
       // }
    }
    if(n==1)
        {
            cout<<"Case "<<t<<": 2"<<endl;
        }
    else if(flag==0)
    {
        cout<<"Case "<<t<<": "<<s+1<<endl;
    }
    else if(flag==1)
    {
        cout<<"Case "<<t<<": "<<sum<<endl;
    }
    nk=0;
    t++;
    }
    return 0;
}
