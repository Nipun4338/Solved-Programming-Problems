#include<bits/stdc++.h>
using namespace std;
int status[100000000/32];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){    return N=N | (1<<pos);}
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
    int a,b,s=0;
    while(cin>>a>>b){
        for(int i=0; i<a; i++)
        {
            if(arr[i]>=1  && arr[i]<=a)
            {
                s++;
            }
        }
        cout<<a<<" "<<b<<":";
        if(s%2==0 && s>=2*b-1)
        {
            for(int j=(s/2)-(b); j<(s/2)+(b); j++)
            {
                cout<<" "<<arr[j];
            }
            cout<<endl;
        }
        else if(s%2==1 && s>=2*b-1)
        {
            for(int j=((s+1)/2)-(b); j<((s+1)/2)+(b-1); j++)
            {
                cout<<" "<<arr[j];
            }
            cout<<endl;
        }
        else if(a==b || b>a || s<2*b-1)
        {
            for(int j=0; j<s; j++)
            {
                cout<<" "<<arr[j];
            }
            cout<<endl;
        }
        s=0;
        cout<<endl;
        }
    return 0;
}