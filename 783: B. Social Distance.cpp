#include <bits/stdc++.h>
#include <numeric>

using namespace std;
typedef long long ll;

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	ll sum = ((2 * a[0] * 1LL) + 1);

	for (int i = 1; i < n - 1; i++)
	{
		sum += a[i] - a[i - 1];
		sum++;
		sum += a[i];
	}
	sum += a[n - 1] - a[n - 2];
	sum += a[n - 1] - a[0];
	sum++;
	if (sum <= m)
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
