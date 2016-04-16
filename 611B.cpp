#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

void chuyenNhiPhan(long long int x, char *s)
{
	int t = 0;
	while (x != 0)
	{
		if (x % 2 == 0)
			s[t++] = '0';
		else
			s[t++] = '1';
		x /= 2;
	}
	s[t] = '\0';
	reverse(s,s+t);
}

int main()
{
	long long int m, n, kq = 0,len1,len2;
	char s1[100], s2[100], *s, kk[100];
	cin >> m >> n;

	chuyenNhiPhan(m, s1);
	chuyenNhiPhan(n, s2);
	len1 = strlen(s1); len2 = strlen(s2);
	while (strlen(s1) < strlen(s2))
	{
		strcpy(kk, "0");
		strcat(kk, s1);
		strcpy(s1, kk);
	}

	s = new char[strlen(s2) + 1];
	for (int i = 0;i<strlen(s2);i++)
		s[i] = '0';
	s[strlen(s2)] = '\0';
	for (int i = len1; i <= len2; i++)
	{
		int dem = i, temp = len2;
		temp--;
		if (i == len1)
		while (dem--)
		{
			s[temp--] = '1';
		}
		else
		{
			s[len2 - dem] = '1';
		}
		temp = strlen(s2);
		char t;
		for (int j = 0;j<i-1;j++)
		{
			t = s[--temp];
			s[temp] = '0';
			if (strcmp(s,s1) >=0 && strcmp(s,s2) <=0)
				kq++;
			s[temp] = '1';
		}
	}
	cout << kq;
}