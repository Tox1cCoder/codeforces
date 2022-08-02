#include <bits/stdc++.h>
#include <numeric>

using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;

	ll dot = 0, times = 0, ans = 0;
	if (n % 2)
	{
		dot++;
		for (ll i = 0; i < n; i += 2)
		{
			dot++;
			times++;
		}
		ans = dot * times * 2;
	}
	else
	{
		dot++;
		times++;
		for (ll i = 2; i <= n; i += 2)
		{
			dot++;
			times++;
		}
		ans = dot * times;
	}
	cout << ans << endl;
}

int main()
{
	int tc = 1;
	while (tc--)
	{
		solve();
	}
	return 0;
}
