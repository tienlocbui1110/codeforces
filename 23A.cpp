#include <bits/stdc++.h>

using namespace std;

int main()
{
	char s[101],*temp,t,*pointer,*kt;
	int kq = 0;
	temp = new char[101];
	cin >>s;
	strcpy(temp,s);
	int len = strlen(s);
	for (int i=len-1;i>0;i--)
		if (kq == 0)
			for (int j=0;j<len-i;j++)
			{
				t = temp[i+j];
				temp[i+j] = '\0';
				temp = (temp + j);
				pointer = (s+j+1);
				kt = strstr(pointer,temp);
				if (kt != NULL)
				{
					kq = i;
					break;
				}
				temp = (temp - j);
				temp[i+j] = t;
			}	
	cout << kq;
}