#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,b,h,g,sum1=1,best;
    while(cin>>a>>b)
    {
        string c,d,f,name;
        double e,price;
        //sum1++;
        best=0;
        price=10000000.0;
       // string name;
        if(a+b==0)
        {
            break;
        }
        getchar();
        for(int i=0; i<a; i++)
        {
            getline(cin,c);
        }
        for(int i=0; i<b; i++)
        {
            //getchar();
            getline(cin,d);
            cin>>e>>g;
            getchar();
            if(best<g)
            {
                best=g;
                name=d;
                price=e;
            }
            else if(best==g && price>e)
            {
                best=g;
                name=d;
                price=e;
            }
            for(int j=0; j<g; j++)
            {
                //getchar();
                getline(cin,f);
            }
            //cout<<name<<endl;
        }
        if(sum1!=1)
        {
            cout<<endl;
        }
        cout<<"RFP #"<<sum1++<<endl;
        cout<<name<<endl;
    }
    return 0;
}
