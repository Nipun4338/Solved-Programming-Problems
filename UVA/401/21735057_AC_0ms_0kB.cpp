#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string a;
    int flag,flag1;
    while(getline(cin,a))
    {
        vector<char>b;
        for(int i=0; i<a.size()/2; i++)
        {
            if(a[i]==a[a.size()-i-1])
            {
                flag=0;
            }
            else
            {
                flag=1;
                break;
            }
        }
        int flag3=0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]=='E')
            {
                b.push_back('3');
            }
            else if(a[i]=='3')
            {
                b.push_back('E');
            }
            else if(a[i]=='J')
            {
                b.push_back('L');
            }
            else if(a[i]=='L')
            {
                b.push_back('J');
            }
            else if(a[i]=='3')
            {
                b.push_back('E');
            }
            else if(a[i]=='S')
            {
                b.push_back('2');
            }
            else if(a[i]=='2')
            {
                b.push_back('S');
            }
            else if(a[i]=='Z')
            {
                b.push_back('5');
            }
            else if(a[i]=='5')
            {
                b.push_back('Z');
            }
            /*else if(a[i]=='O')
            {
                b.push_back('0');
            }*/
            else if(a[i]=='0')
            {
                b.push_back('O');
            }
            else if(a[i]=='A' || a[i]=='H' || a[i]=='I' || a[i]=='M' || a[i]=='O' || a[i]=='T' || a[i]=='U' || a[i]=='V' || a[i]=='W' || a[i]=='X' || a[i]=='Y' || a[i]=='1' || a[i]=='8')
            {
                b.push_back(a[i]);
            }
            else
            {
                flag3=1;
            }
        }
        //cout<<flag3<<endl;
        if(flag3==0)
        {
            for(int i=0; i<b.size(); i++)
            {
                if(b[i]==a[a.size()-i-1])
                {
                    flag1=0;
                }
                else
                {
                    flag1=1;
                    break;
                }
            }
        }
        else
        {
            flag1=1;
        }
        //cout<<flag1<<endl;
        cout<<a<<" -- ";
        if((flag==0 && flag1==0) || (a.size()==1 && flag1==0))
        {
            cout<<"is a mirrored palindrome."<<endl;
        }
        else if(flag==1 && flag1==0)
        {
            cout<<"is a mirrored string."<<endl;
        }
        else if((flag==0 && flag1==1) || a.size()==1)
        {
            cout<<"is a regular palindrome."<<endl;
        }
        else
        {
            cout<<"is not a palindrome."<<endl;
        }
        cout<<endl;
    }
}
