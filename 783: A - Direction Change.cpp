#include <bits/stdc++.h>
#include <numeric>

using namespace std;
typedef long long ll;

void solve()
{
	ll n, m, ans = 0;
	cin >> n >> m;
	if (n > m)
		swap(n, m);
	n--;
	m--;

	if (n == 0)
	{
		if (m == 0)
		{
			cout << 0 << endl;
		}
		else if (m == 1)
		{
			cout << 1 << endl;
		}
		else
		{
			cout << -1 << endl;
		}
		return;
	}

	ans += 2 * n;
	m -= n;
	ans += 2 * m;
	if (m & 1)
	{
		ans--;
	}
	cout << ans << endl;
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
