#include <bits/stdc++.h>
#include <numeric>

using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;

	if(n < 2020)
	{
		cout << "NO" << endl;
	}
	else if(n % 2020 <= n / 2020)
	{
		cout << "YES" << endl;
	}
	else 
	{
		cout << "NO	" << endl;
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
