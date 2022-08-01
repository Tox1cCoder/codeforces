#include <bits/stdc++.h>
#include <numeric>

using namespace std;
typedef long long ll;

void solve()
{
	int n, x;
	cin >> n >> x;
	ll sum = 0, max = 0;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
		max += ceil(double(a[i]) / double(x));
	}

	cout << 1ll * ceil(double(sum) / double(x)) << ' ' << max << endl;
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
