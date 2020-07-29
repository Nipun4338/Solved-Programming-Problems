/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, c = 0, d=0, e=0;
	char b[65005];
	cin >> a;
	cin >> b;
	sort(b, b + a);
	for (int i = 0; i < a-1; i++)
	{
		if (b[i] == b[i + 1])
		{
			c++;
		}
	}
	for (int i = 0; i < a; i++)
	{
		d = b[i] - '0';
		if (d % 2 == 0)
		{
			e++;
		}
	}
	cout << (a*e)-e-c << endl;
	return 0;
}
