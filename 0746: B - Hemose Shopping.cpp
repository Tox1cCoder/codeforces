#include <bits/stdc++.h>
#include <numeric>

using namespace std;
typedef long long ll;

void solve()
{
	int n, x;
	cin >> n >> x;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b.begin(), b.end());
	bool flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (i < x && n - i - 1 < x && a[i] != b[i])
		{
			cout << "NO" << endl;
			flag = 1;
			break;
		}
	}
	if (!flag)
	{
		cout << "YES" << endl;
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
