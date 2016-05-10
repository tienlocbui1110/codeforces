#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A[100002],n,k=0;
	string s;
	cin >> s;
	cin >> n;

	A[0] = 0;
	int x = s.length() - 1;
	for (int i=0; i<x; i++)
		if (s[i] == s[i+1])
			A[i+1] = A[i]+1;
		else
			A[i+1] = A[i]; 
	int l,r;
	for (int i=0; i<n; i++)
	{
		
		cin >> l >> r;
		cout << A[r-1] - min(A[l],A[l-1]) << endl;
	}
}