#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0;
    char c;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        if(c=='+')
        {
            sum++;
        }
        else if(c=='-')
        {
            sum--;
            if(sum<0)
            {
                sum=0;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
