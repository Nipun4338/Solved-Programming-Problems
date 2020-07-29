#include<bits/stdc++.h>
using namespace std;
long long int N=100000000;
long long int status[100000000];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}
void sieve()
{
     int i,j,k=0,sqrtN;
     int arr[20];
     sqrtN = int( sqrt( N ) );
     for( i=3; i<=sqrtN; i+=2 )
     {
		 if( Check(status[i/32],i%32)==0)
		 {
	 		 for(j=i*i; j<=N; j+=2*i)
			 {
				 status[j/32]=Set(status[j/32],j%32);
				 //arr[k]=i;
	 		 }
		 }
    /*if(k%100==1){
    cout<<i<<endl;
     }*/
	 }
	 /*for(i=0; i<10; i++)
     {
         if(Check(status[i/32],i%32)==0){
         cout<<arr[i]<<endl;
         }
     }*/
     //cout<<"   "<<k<<endl;
     cout<<"2"<<endl;
     for(i=3;i<=N;i+=2){
            if(Check(status[i/32],i%32)==0){
                k++;
                if((k+1)%100==1){
                cout<<i<<endl;
            }
        }
     }
}

int main()
{
    sieve();
    return 0;
}
