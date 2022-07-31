#include <bits/stdc++.h>
#include <numeric>

using namespace std;
typedef long long ll;

void solve()
{
	ll n, l, r;
	cin >> n >> l >> r;
	vector<ll> a(n + 1);

	for (ll i = 1; i <= n; i++)
	{
		if (l % i == 0)
		{
			a[i] = l;
		}
		else
		{
			a[i] = l + i - l % i;
		}
		if (a[i] > r)
		{
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
	for (ll i = 1; i <= n; i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
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
