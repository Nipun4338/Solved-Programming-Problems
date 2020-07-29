/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	string b;
	map<string, string>m;
	map<string, string>::iterator it;
	m["purple"] = "Power";
	m["green"] = "Time";
	m["blue"] = "Space";
	m["orange"] = "Soul";
	m["red"] = "Reality";
	m["yellow"] = "Mind";
	cin >> a;
	if (a == 0)
	{
		cout << "6" << endl;
		for (it = m.begin(); it != m.end(); it++)
		{
			cout << it->second << endl;
		}
	}
	else
	{
		for (int i = 0; i < a; i++)
		{
			cin >> b;
			m.erase(b);
		}
		cout << 6 - a << endl;
		for (it = m.begin(); it != m.end(); it++)
		{
			cout << it->second << endl;
		}
	}
	return 0;
}
