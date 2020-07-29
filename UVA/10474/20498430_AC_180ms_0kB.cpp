/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
int a,arr[100001],b;

int bin_search(int b1)
{
    int low=0;
    int high=a-1;
    int res=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==b)
        {
            low=mid+1;
            //high=mid-1;
            res=mid;
            //return mid;
        }
        if(b>arr[mid])
        {
            low=mid+1;
        }
        if(b<arr[mid])
        {
            high=mid-1;
        }
    }
    return res;
}

int main()
{
    //ofstream m;
    //m.open("ex.txt");
    int b1,l=0,flag;
    while(cin>>a>>b1)
    {
        l++;
        if(a+b1==0)
        {
            break;
        }
        memset(arr,0,sizeof(arr));
        for(int i=0; i<a; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+a);
        //bin_search();
        //cout<<bin_search(b)<<endl;
        flag=1;
        for(int i=0; i<b1; i++)
        {
            cin>>b;
            if(flag==1)
            {
                cout<<"CASE# "<<l<<":"<<endl;
                flag=0;
            }
            //cout<<bin_search(b,a)<<endl;
            int b2=bin_search(b);
            if(b2!=-1)
            {
                cout<<b<<" found at "<<lower_bound(arr,arr+a,b)-arr+1<<endl;
            }
            else
            {
                cout<<b<<" not found"<<endl;
            }
        }
        //cout<<"Case "<<j+1<<": "<<bin_search(1,10000001)<<endl;
    }
    //m.close();
    return 0;
}
