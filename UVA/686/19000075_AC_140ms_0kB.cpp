#include<bits/stdc++.h>
using namespace std;
int status[100000000/32];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){    return N=N | (1<<pos);}
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

int main()
{
    sieve();
    double a,sum=0,s=0;
    while(cin>>a)
    {
        for(int i=0; i<a; i++)
        {
            if(arr[i]>=2  && arr[i]<=a)
            {
                s++;
            }
        }
        if(a==0)
        {
            break;
        }
        else
        {
            //cout<<s<<endl;
            for(int i=0; i<s; i++)
            {
                for(int j=0; j<s; j++)
                {
                    if(arr[i]+arr[j]==a)
                    {
                        sum++;
                        //cout<<arr[i]<<" "<<arr[j]<<endl;
                        break;
                    }
                }
            }
        }
        //cout<<sum<<endl;
        cout<<ceil(sum/2)<<endl;
        sum=0;
        s=0;
    }
    return 0;
}