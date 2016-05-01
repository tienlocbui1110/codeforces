#include <iostream>
#include <string>
#include <set>
using namespace std;

set <string> add;
bool danhdau[10000][4];

set<string>::iterator it;
string s;

void dfs(int viTri, int doDai)
{
	if (viTri <= 4 || danhdau[viTri][doDai]) return;
	danhdau[viTri][doDai] = true;
	string x = s.substr(viTri, doDai);
	add.insert(x);
	if (x != s.substr(viTri - doDai, doDai))
		dfs(viTri - doDai, doDai);
	dfs(viTri - (5 - doDai), 5 - doDai);
}

int main()
{
	cin >> s;
	dfs(s.length() - 2, 2); dfs(s.length() - 3, 3);

	cout << add.size() << endl;
	for (it = add.begin(); it != add.end(); it++)
		cout << *it << endl;
} 
