#include <bits/stdc++.h>
#include <numeric>

using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	ll tmp = 0, sum = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		tmp += a[i];
		if(tmp >= 0)
		{
			sum += tmp;
			tmp = 0;
		}
	}
	cout << sum << endl;
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
