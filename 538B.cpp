#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m=0;
	cin >> n;

	string s[9];
	while (n != 0)
	{
		int temp = n%10;
		if (m<temp)
			m = temp;
		for (int i=0; i<temp; i++)
		{
			s[i] = "1" + s[i];
		}

		for (int i=temp; i<9; i++)
			s[i] = "0" + s[i];
		n/=10;
	}

	cout << m << endl;
	for (int i=0; i<m; i++)
	{
		int t = atoi(s[i].c_str());
		if (t!=0)
			cout << t << " ";
	}
}