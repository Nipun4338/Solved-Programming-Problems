#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

const int M = (int)(2e6 + 239);

int pref[M], c;
vector<ll> lps(M);

string constructTempArray(string pattern1)
{
    string pattern= pattern1;
    reverse(all(pattern));
    pattern= pattern1 + "#" + pattern;
    ll index = 0;
    for (int i = 1; i < (int) pattern.length(); )
    {
        if (pattern[i] == pattern[index])
            lps[i] = index + 1, ++index, ++i;
        else
        {
            if (index != 0)
                index = lps[index - 1];
            else
                lps[i] = index, ++i;
        }
    }
    return pattern1.substr(0,index);
}

/*string solve_palindrome(const string& s)
{
    string a = s;
    reverse(a.begin(), a.end());
    a = s + "#" + a;
    c = 0;
    for (int i = 1; i < (int)a.size(); i++)
    {
        while (c != 0 && a[c] != a[i])
            c = pref[c - 1];
        if (a[c] == a[i])
            c++;
        pref[i] = c;
    }
    for(int i=0; i<a.size(); i++)
    {
        cout<<pref[i]<<" ";
    }
    cout<<s.substr(0,c)<<endl;
    return s.substr(0, c);
}*/

int main()
{
    FAST;
    ll a;
    cin>>a;
    while(a--)
    {
        string t;
        cin>>t;
        ll l=0;
        while ((2*l)+1<t.size())
        {
            if(t[l]!=t[t.size()-l-1])
            {
                break;
            }
            l++;
        }
        if(l>0)
        {
            cout<<t.substr(0,l);
        }
        if(t.size()>2*l)
        {
            string s=t.substr(l, t.size()-2*l);
            string x1=constructTempArray(s);
            reverse(all(s));
            string x2=constructTempArray(s);
            if(x1.size()>x2.size())
            {
                swap(x1,x2);
            }
            cout<<x2;
        }
        if(l>0)
        {
            cout<<t.substr(t.size()-l,l);
        }
        cout<<endl;
    }
    //solve_palindrome(t);
    //constructTempArray(t);
}
