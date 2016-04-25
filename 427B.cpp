#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A[200000];
	int begin = -1,sum=0,n,t,c,dem=-1,temp;
	
	cin >> n >> t >> c;
	for (int i=0; i<n ; i++)
	{
		cin >> temp;
		if (temp > t)
		{
			dem++;
			A[dem] = i;
		}
	}

	for (int i=0; i<=dem; i++)
	{
		int x = A[i] - begin;
		if (x > c)
		sum+= x-c;
		begin = A[i];
	}

	int x = n - begin;
	if (x > c)
		sum+= x - c;

	cout << sum;
}