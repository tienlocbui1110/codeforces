#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<char> y;
	set <vector <char> > x;
	char s[10001];
	cin >> s;

	char dau, giua, duoi;
	if (strlen(s) <= 6)
	{
		cout << 0;
		return 0;
	}
	vector<char>::iterator khoitao;
	khoitao = y.begin();
	y.insert(khoitao,s[strlen(s)-2] );
	y.push_back(s[strlen(s)-1]);
	x.insert(y);
	if (strlen(s) == 7)
	{
		cout << 1 << endl;
		cout << y[0] << y[1];
		return 0;
	}

	if (strlen(s) - 3 >= 5)
	{
		khoitao = y.begin();
		y.insert(khoitao, s[strlen(s)-3]);
		x.insert(y);
	}

	if (strlen(s) - 4 >= 5)
	{
		y.pop_back();
		y.pop_back();
		khoitao = y.begin();
		y.insert(khoitao, s[strlen(s) - 4]);
		x.insert(y);
	}

	for (int i = strlen(s) - 5; i >= 5; i--)
	{
		khoitao = y.begin();
		y.insert(khoitao, s[i]);
		x.insert(y);
		y.pop_back();
		x.insert(y);
	}

	cout << x.size() << endl;
	for (set<vector<char>>::iterator i = x.begin(); i != x.end(); i++)
	{
		y = *i;
		for (vector<char>::iterator j = y.begin(); j != y.end(); j++)
			cout << *j;
		cout << endl;
	}
}