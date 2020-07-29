#include<bits/stdc++.h>
using namespace std;
int status[100000000/32];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){    return N=N | (1<<pos);}
int arr[1000000];
long long int l=0,a,b=1000000,n;


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
    long long int a,sum=0,s=0,c=0,x=0,y=0,p=0,flag=0;
    while(cin>>a)
    {
        for(int i=0; i<l; i++)
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
            cout<<a<<":"<<endl;
            //cout<<s<<endl;
            for(int i=0; i<s; i++)
            {
                y=a-arr[i];
                if(y%2==0)
                {
                    flag=0;
                }
                else{
                for(int j=0; j<s; j++){
                    if(arr[j]==y)
                    {
                        x=arr[i];
                        flag=1;
                    }
                    if(flag==1)
                    {
                        break;
                    }
                }
                }
                if(flag==1)
                    {
                        break;
                    }
                    else
                    {
                        flag=0;
                        //break;
                    }
            }
            if(flag==1){
            cout<<x<<"+"<<y<<endl;
            }
            else if(flag==0)
            {
                cout<<"NO WAY!"<<endl;
            }
            x=0;
            y=0;
            flag=0;
        }
        s=0;
    }
    return 0;
}
