/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b[105], c[105],d,e=0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b[i] >> c[i];
	}
	cin >> d;
	for (int i = 0; i < a; i++)
	{
		if (d >= b[i] && d <= c[i])
		{
			e++;
		}
		else if (d < b[i])
		{
			e++;
		}
	}
	cout << e << endl;
}
