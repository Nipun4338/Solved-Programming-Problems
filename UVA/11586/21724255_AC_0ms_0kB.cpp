#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,flag,sum=0,sum1=0,sum2=0;
    string b;
    cin>>a;
    getchar();
    for(int i=0; i<a; i++)
    {
        getline(cin,b);
        //cout<<b<<endl;
        for(int i=0; i<b.size()-1; i++)
        {
            //cout<<b[i]<<" "<<b[i+1]<<endl;
            if(b[i]=='F' && b[i+1]=='M')
            {
                sum++;
            }
            else if(b[i]=='M' && b[i+1]=='F')
            {
                sum++;
            }
            else if(b[i]=='F' && b[i+1]=='F')
            {
                sum1++;
            }
            else if(b[i]=='M' && b[i+1]=='M')
            {
                sum2++;
            }
        }
        //cout<<sum<<endl;
        if(sum1==sum2 && sum1!=0)
        {
            cout<<"LOOP"<<endl;
        }
        else if(sum1==0 && sum2==0 && sum>1)
        {
            cout<<"LOOP"<<endl;
        }
        else
        {
            cout<<"NO LOOP"<<endl;
        }
        sum=0;
        sum1=0;
        sum2=0;
    }
}
