#include<bits/stdc++.h>
using namespace std;
int main()
{
    //FILE *p1=fopen("A.txt","w");
    unsigned long int a,b,c=0,l=0,d=0,e[10000],g=0,f[10000],sum=0,sum2=0;
    while(cin>>a>>b)
    {
        if(a+b==0)
        {
            break;
        }
        else
        {
            c=a;
            d=b;
            for(int j=0; j<10000; j++)
            {
                e[j]={0};
                f[j]={0};
            }
            while(c!=0)
            {
                e[l]=c%10;
                l++;
                c=c/10;
            }
            while(d!=0)
            {
                f[g]=d%10;
                g++;
                d=d/10;
            }
            for(int m=0; m<max(l,g); m++)
            {
                if(e[m]+f[m]+sum2>=10)
                {
                    //cout<<e[m]<<" "<<f[n]<<endl;
                    sum++;
                    sum2=(e[m]+f[m]+sum2)/10;
                }
                else
                {
                    sum2=0;
                }
            }
            if(sum==1)
            {
                cout<<sum<<" carry operation."<<endl;
                //fprintf(p1,"%d carry operation.\n",sum);
            }
            else if(sum>1)
            {
                cout<<sum<<" carry operations."<<endl;
                //fprintf(p1,"%d carry operations.\n",sum);
            }
            else
            {
                cout<<"No carry operation."<<endl;
                //fprintf(p1,"No carry operation.\n");
            }
            sum=0;
            sum2=0;
            c=0;
            d=0;
            l=0;
            g=0;
        }
    }
    //fclose(p1);
    return 0;
}