/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c[105],l=0,d=0,e=0,m=0;
	cin >> a>>b;
	set<int>s;
	vector<int> v;
	for (int i = 0; i < a; i++)
	{
		cin >> d >> e;
		for (int i = d; i <= e; i++)
		{
			s.insert(i);
		}
	}
	vector<int>s1(s.begin(), s.end());
	for (int i = 0; i < b; i++)
	{
		v.push_back(i + 1);
	}
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < s1.size(); j++)
		{
			if (s1[j] == v[i])
			{
				v.erase(v.begin() + i);
			}
		}
	}
	cout << v.size() << endl;
	if (v.size() != 0)
	{
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i];
			if (i != v.size() - 1)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
