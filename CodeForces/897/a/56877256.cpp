/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, l, r;
	char s[1000],c1,c2;
	cin >> a >> b;
	cin >> s;
	for (int i = 0; i < b; i++)
	{
		cin >> l >> r >> c1 >> c2;
		for (int j = l-1; j <=r-1; j++)
		{
			if (s[j] == c1)
			{
				s[j] = c2;
			}
		}
	}
	cout << s << endl;
	return 0;
}
