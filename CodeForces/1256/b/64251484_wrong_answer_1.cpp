#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,d,e,f;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vector<int>v,v1;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v.push_back(c);
            v1.push_back(c);
        }
        sort(v1.begin(),v1.end());
        int sum=0,flag;
        for(int i=0; i<v.size(); i++)
        {
            for(int j=0; j<v.size(); j++)
            {
                if(v1[i]==v[j])
                {
                    flag=0;
                    //cout<<j<<" "<<v.size()-1<<endl;
                    if(j==0 && v[j+1]<v[j])
                    {
                        swap(v[j],v[j+1]);
                        flag=1;
                        break;
                    }
                    else if(j==v.size()-1 && v[j-1]>v[j])
                    {
                        //cout<<v[j]<<endl;
                        flag=1;
                        swap(v[j],v[j-1]);
                        break;
                    }
                    else if(j-1>=0 && v[j-1]>v[j] && j+1<=v.size()-1 && v[j+1]>v[j])
                    {
                        swap(v[j],v[j-1]);
                        flag=1;
                        break;
                    }
                    else if(j-1>=0 && v[j-1]>v[j] && j+1<=v.size()-1 && v[j+1]<v[j])
                    {
                        swap(v[j],v[j+1]);
                        flag=1;
                        break;
                    }
                    else if(j-1>=0 && v[j-1]<v[j] && j+1<=v.size()-1 && v[j+1]<v[j])
                    {
                        flag=1;
                        if(j-2>=0 && v[j-2]>v[j])
                        {
                            swap(v[j],v[j+1]);
                            break;
                        }
                        else
                        {
                            break;
                        }
                    }
                    else if(j-1>=0 && v[j-1]>v[j])
                    {
                        flag=1;
                        swap(v[j],v[j-1]);
                        break;
                    }
                    else if(j-1>=0 && j==v.size()-1 && v[j-1]>v[j])
                    {
                        flag=1;
                        swap(v[j],v[j-1]);
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i];
            if(i!=v.size()-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;

    }
}
