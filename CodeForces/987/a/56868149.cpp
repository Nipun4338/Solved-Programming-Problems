/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,flag=0,sum=0;
	string b[6],c[6];
	pair<string,string> p[6];
	p[0].first = "purple"; p[0].second = "Power";
	p[1].first = "green"; p[1].second = "Time";
	p[2].first = "blue"; p[2].second = "Space";
	p[3].first = "orange"; p[3].second = "Soul";
	p[4].first = "red"; p[4].second = "Reality";
	p[5].first = "yellow"; p[5].second = "Mind";
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b[i];
	}
	if (a != 0) {
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < a; j++)
			{
				if (p[i].first == b[j])
				{
					flag = 1;
					break;
				}
				else
				{
					flag = 0;
				}
			}
			if (flag == 0)
			{
				sum++;
				c[sum - 1] = p[i].second;
			}
		}
	}
	if (a != 0) {
		cout << sum << endl;
		for (int i = 0; i < sum; i++)
		{
			cout << c[i] << endl;
		}
	}
	else
	{
		cout << "6" << endl;
		for (int i = 0; i < 6; i++)
		{
			cout << p[i].second << endl;
		}
	}
	return 0;
}
