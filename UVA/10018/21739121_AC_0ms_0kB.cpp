#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,rev=0,sum=0,d=0,e=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        c=b;
        while(rev!=b)
        {
            rev=0;
            while(c!=0)
            {
                rev=rev*10;
                rev=rev+c%10;
                c=c/10;
            }
            if(b==rev)
            {
                d++;
                if(d==1 && b>4)
                {
                    rev=rev*2;
                }
                else if(d>0)
                {
                    break;
                }
            }
            if(b!=rev){
            sum=rev+b;
            b=sum;
            c=sum;
            d++;
            e++;
            }
        }
        if(b==0)
        {
            cout<<"1 0"<<endl;
        }
        else if(b==1)
        {
            cout<<"1 2"<<endl;
        }
        else if(b==2)
        {
            cout<<"1 4"<<endl;
        }
        else if(b==3)
        {
            cout<<"1 6"<<endl;
        }
        else if(b==4)
        {
            cout<<"1 8"<<endl;
        }
        else
        {
            cout<<e<<" "<<rev<<endl;
        }
        rev=0;
        sum=0;
        c=0;
        d=0;
        e=0;
    }
    return 0;

}