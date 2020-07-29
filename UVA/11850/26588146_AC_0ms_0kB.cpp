#include<bits/stdc++.h>
using namespace std;
int flag=0;
int main()
{
    int a,b[1423],c=0;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        else
        {
            for(int i=0; i<a; i++)
            {
                cin>>b[i];
            }
            sort(b,b+a);
            for(int j=0; j<a-1; j++)
            {
                c=abs(b[j]-b[j+1]);
                if(c<=200 && 1422-b[a-1]<=100)
                {
                    c=0;
                    flag=0;
                }
                else
                {
                    c=0;
                    flag=1;
                    break;
                }
                c=0;
            }
            if(flag==0)
            {
                cout<<"POSSIBLE"<<endl;
            }
            else if(flag==1)
            {
                cout<<"IMPOSSIBLE"<<endl;
            }
        }
    }
    return 0;
}