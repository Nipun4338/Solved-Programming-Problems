/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		while (b != 0) {
			if (b % 2 != 1)
			{
				c = c + (b / 2);
				b = b % 2;
			}
			if (b % 3 != 1)
			{
				c = c + (b / 3);
				b = b % 3;
			}
			if (b % 4 != 1)
			{
				c = c + (b / 4);
				b = b % 4;
			}
			if (b % 5 != 1)
			{
				c = c + (b / 5);
				b = b % 5;
			}
			if (b % 6 != 1)
			{
				c = c + (b / 6);
				b = b % 6;
			}
			if (b % 7 != 1)
			{
				c = c + (b / 7);
				b = b % 7;
			}
		}
		cout << c << endl;
		c = 0;
	}
}
