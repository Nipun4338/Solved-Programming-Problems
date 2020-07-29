#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string a,b;
    char c='a';
    int sum=0,sum1=0,sum12=0,sum2=0,sum22=0;
    vector<int>v;
    vector<char>v1;
    for(int i=0; i<26; i++)
    {
        sum=sum+1;
        v.push_back(sum);
    }
    for(int i=0; i<26; i++)
    {
        v1.push_back(c);
        c++;
    }
    while(getline(cin,a))
    {
        getline(cin,b);
        for(int i=0; i<26; i++)
        {
            for(int j=0; j<a.size(); j++)
            {
                c=tolower(a[j]);
                if(c==v1[i])
                {
                    sum1=sum1+v[i];
                }
            }
        }

        for(int i=0; i<26; i++)
        {
            for(int j=0; j<b.size(); j++)
            {
                c=tolower(b[j]);
                if(c==v1[i])
                {
                    sum2=sum2+v[i];
                }
            }
        }
        //cout<<sum1<<" "<<sum2<<endl;
        int flag=1;
        sum12=sum1;

        while(true)
        {
            if(sum1<10 && sum12<10)
            {
                break;
            }
            if(flag==1)
            {
                sum12=0;
                flag=0;
            }
            sum12=sum12+sum1%10;
            sum1=sum1/10;
            if(sum12>=10 && sum1<10)
            {
                //sum12=sum12+sum1;
                sum1=sum12+sum1;
                sum12=0;
            }
            else if(sum12<10 && sum1<10)
            {
                //sum12=sum12+sum1;
                sum12=sum12+sum1;
                if(sum12<10)
                {
                    break;
                }
                else
                {
                    sum1=sum12;
                    sum12=0;
                }
            }
            //cout<<sum12<<endl;
        }

        flag=1;
        sum22=sum2;
        while(true)
        {
            if(sum2<10 && sum22<10)
            {
                break;
            }
            if(flag==1)
            {
                sum22=0;
                flag=0;
            }
            sum22=sum22+sum2%10;
            sum2=sum2/10;
            if(sum22>=10 && sum2<10)
            {
                //sum12=sum12+sum1;
                sum2=sum22+sum2;
                sum22=0;
            }
            else if(sum22<10 && sum2<10)
            {
                //sum12=sum12+sum1;
                sum22=sum22+sum2;
                if(sum22<10)
                {
                    break;
                }
                else
                {
                    sum2=sum22;
                    sum22=0;
                }
            }
            //cout<<sum12<<endl;
        }
        //cout<<sum12<<" "<<sum22<<endl;
        if(sum12>sum22)
        {
            swap(sum12,sum22);
        }
        double percentage=((double)sum12/(double)sum22*1.0)*100;
        cout<<fixed<<setprecision(2)<<percentage<<" %"<<endl;

        sum1=0;
        sum2=0;
    }
}
