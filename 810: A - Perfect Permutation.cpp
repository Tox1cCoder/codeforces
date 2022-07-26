#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	for(int i = 2; i <= n; i++)
	{
		cout << i << ' ';
	}
	cout << '1' << endl;
}

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		solve();
	}
	return 0;
}
