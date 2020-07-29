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


vector<ll> constructTempArray(string pattern) {
    vector<ll> lps(pattern.length());
    ll index = 0;
    for (int i = 1; i < (int) pattern.length(); ) {
        if (pattern[i] == pattern[index]) lps[i] = index + 1, ++index, ++i;
        else {
            if (index != 0) index = lps[index - 1];
            else lps[i] = index, ++i;
        }
    }
    return lps;
}

void KMPMultipleTimes (string text, string pattern)
{
    bool found = false;
    vector<ll> lps=constructTempArray(pattern);
    int j = 0, i = 0;

    // i --> text, j --> pattern
    while (i < (int) text.length())
    {
        if (text[i] == pattern[j])
            ++i, ++j;
        else
        {
            if (j != 0)
                j = lps[j - 1];
            else ++i;
        }

        if (j == (int) pattern.length())
        {
            cout << "found match at : " << (i - pattern.length()) << endl;
            j = lps[j-1];
            found = true;
        }
    }

    if (!found)
        cout << "not found" << endl;
}

int main()
{
    FAST;
    ll testcase;
    cin>>testcase;
    while(testcase--)
    {
        string text, pattern;
        ll b;
        cin>>text>>b;
        //KMPMultipleTimes(text, pattern);
        auto pf =constructTempArray(text);
        printf("%lld\n",(1LL*text.size()*b)-(1LL*(b-1)*pf[text.size()-1]));
    }
    return 0;
}
