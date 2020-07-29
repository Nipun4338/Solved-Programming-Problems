/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c = 0, d = 0;
		cin >> a >> b;
		if (a == 1 && b <= 9)
		{
			cout << b << endl;
		}
		else if (a == 1 && b >= 10)
		{
			cout << "-1" << endl;
		}
		else
		{
			for (int i = 1; i <= a; i++)
			{
				cout << b;
			}
			cout << endl;
		}
	return 0;
}
