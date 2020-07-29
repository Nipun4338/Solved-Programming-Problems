/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
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

int bin_search(long long int key)
{
    int low=0;
    int high=l-1;
    int res=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            res=mid;
            //high=mid-1;
            //low=mid+1;
            return mid;
        }
        if(key>arr[mid])
        {
            low=mid+1;
        }
        if(key<arr[mid])
        {
            high=mid-1;
        }
    }
    if(low>high)
    {
        return res;
    }
}

int main()
{
    sieve();
    long long int a;
    cin>>a;
    long long b,c;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        c=sqrt(b);
        if(c*c==b && bin_search(c)!=-1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

