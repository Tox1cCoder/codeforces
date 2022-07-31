#include <bits/stdc++.h>

using namespace std;

void solve()
{
	long long n;
	cin >> n;
	vector<long long> a(n);
	bool res = true;
	for (long long i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (long long i = 0; i < n; i++)
	{
		if (a[i] % a[0])
		{
			res = false;
			break;
		}
	}

	if (res)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}

int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		solve();
	}
	return 0;
}
