#include <bits/stdc++.h>
#include <numeric>

using namespace std;
typedef long long ll;

void solve()
{
	ll n, m;
	cin >> n >> m;
	ll ans1 = 0, ans2 = 0;

	for (ll i = 1; i <= m; i++)
	{
		ans1 += i;
	}
	for (ll i = 2; i <= n; i++)
	{
		ans1 += (i - 1) * m + m;
	}
	for (ll i = 1; i <= m; i++)
	{
		ans2 += (i - 1) * m + 1;
	}
	for (ll i = 2; i <= n; i++)
	{
		ans2 += (n - 1) * m + i;
	}

	cout << min(ans1, ans2) << endl;
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
