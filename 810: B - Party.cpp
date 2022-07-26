#include <bits/stdc++.h>

using namespace std;

void solve()
{
	long long n, m;
	cin >> n >> m;
	vector<long long> cost(n), freq(n + 1, 0);
	vector<pair<long, long>> have;

	for (long long i = 0; i < n; i++)
	{
		cin >> cost[i];
	}

	for (long long i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		have.push_back({x, y});
		freq[x]++;
		freq[y]++;
	}

	if (m % 2 == 1)
	{
		long long ans = LONG_MAX;
		for (long long i = 1; i <= n; i++)
		{
			if (freq[i] % 2 == 1)
			{
				ans = min(ans, cost[i - 1]);
			}
		}
		for(auto x : have)
		{
			if((freq[x.first] % 2 == 0) && (freq[x.second] % 2 == 0))
			{
				ans = min(ans, cost[x.first - 1] + cost[x.second - 1]);
			}
		}
		cout << ans << endl;
	}
	else
	{
		cout << '0' << endl;
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
