/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, c = 0, d=0;
	char b[65005];
	cin >> a;
	cin >> b;
	for (int i = 0; i < a; i++)
	{
		d = b[i] - '0';
		if (d%2==0)
		{
			c = c + (i + 1);
		}
	}
	cout << c << endl;
	return 0;
}
