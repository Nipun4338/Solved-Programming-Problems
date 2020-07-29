/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d, e, f=0;
	vector<int> v;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b >> c >> d >> e;
		v.push_back(b + c + d + e);
	}
	f = v[0];
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		if (f == v[i])
		{
			cout << i + 1 << endl;
			break;
		}
	}
	return 0;
}
