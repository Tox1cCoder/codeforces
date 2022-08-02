#include <bits/stdc++.h>
#include <numeric>

using namespace std;
typedef long long ll;

void solve()
{
	ll n, x;
	cin >> n >> x;
	vector<pair<ll, ll>> a;
	for (ll i = 0; i < n; i++)
	{
		ll p;
		cin >> p;
		a.push_back({ p, 1 });
	}
	int i = 0;
	while (i < a.size())
	{
		pair<ll, ll> p = a[i++];
		if (p.first % x)
			break;
		a.push_back({ p.first / x, p.second * x });
	}
	ll ans = 0;
	for (auto x : a)
	{
		ans += x.first * x.second;
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
