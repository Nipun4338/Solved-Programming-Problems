/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a, b, c, c1[105] = {}, m = 0, e = 0, f = 0;
	double d = 0;
	cin >> a >> b;
	set<int>s;
	for (int i = 0; i < a; i++)
	{
		cin >> c;
		s.insert(c);
		c1[c]++;
		m = max(m, c1[c]);
	}
	d = (double)(m / (b * 1.0));
	if ((double)d - (int)d > 0)
	{
		f = ceil(d);
	}
	else
	{
		f = (int)d;
	}
	e = s.size() * f * b;
	cout << e - a << endl;
	return 0;
}
