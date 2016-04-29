#include <bits/stdc++.h>

using namespace std;

int UCLN(int a, int b)
{
	while (a != b)
	{
		if (a>b)
			a %= b;
		else
			b %= a;
		if (a == 0)
			a = b;
		if (b == 0)
			b = a;
	}
	return a;
}

int main()
{
	int n, temp;
	list<int> A;
	list<int>::iterator it, it1;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> temp;
		A.push_back(temp);
	}

	it = A.begin();

	for (int i = 0; i<n - 1; i++)
	{
		 it1 = it;
		it1++;
		if (UCLN(*it,*it1) != 1)
		{
			A.insert(it1, 1);
			it++;
		}
		it++;
	}
	int chan = A.size();
	cout << chan - n << endl;
	for (it = A.begin(); it != A.end(); it++)
	{
		cout << *it << " ";
	}

	return  0;
}