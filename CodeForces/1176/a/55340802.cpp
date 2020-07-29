#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,sum=0,c=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        c=b;
        while(b!=1)
        {
            if(b%5==0)
            {
                b=(4*b)/5;
            }
            else if(b%3==0)
            {
                b=(2*b)/3;
            }
            else if(b%2==0)
            {
                b=(b/2);
            }
            else if(b%2!=0 && b%3!=0 && b%5!=0 && b!=1)
            {
                sum=0;
                break;
            }
            sum++;
        }
        if(sum>0 && c!=1){
        cout<<sum<<endl;
        }
        else if(c==1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        c=0;
        sum=0;
    }
	return 0;
}
