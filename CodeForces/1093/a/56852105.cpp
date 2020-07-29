/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		if (b < 8)
		{
			cout << "1" << endl;
		}
		else if (b % 7 == 0)
		{
			cout << b / 7 << endl;
		}
		else
		{
			cout << (b / 7) + 1 << endl;
		}
	}
}
