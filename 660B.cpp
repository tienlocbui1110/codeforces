#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	for (int i=1;i <= n*4; i++)
	{
		if (2*n +i  <= m)
			cout << 2*n+i << " ";
		if (i <= 2*n && i<=m)
			cout << i << " ";
	}
}