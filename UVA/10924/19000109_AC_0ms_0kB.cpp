#include<bits/stdc++.h>
using namespace std;
int status[100000000/32];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){ return N=N | (1<<pos);}
int arr[100000];
long long int l=0,a,b=10000,n;


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
    arr[0]=1;
    arr[1]=2;
    l=2;
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
    char a[20];
    int sum=0,flag=0;
    while(cin>>a)
    {
        int b=strlen(a);
        for(int i=0; i<b; i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                sum=sum+(a[i]-96);
            }
            if(a[i]>='A' && a[i]<='Z')
            {
                sum=sum+(a[i]-38);
            }
        }
        for(int j=0; j<sum; j++)
        {
            if(sum==arr[j])
            {
                cout<<"It is a prime word."<<endl;
                flag=0;
                break;
            }
            else if(sum!=arr[j])
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"It is not a prime word."<<endl;
        }
        b=0;
        sum=0;
        flag=0;
    }
    return 0;
}