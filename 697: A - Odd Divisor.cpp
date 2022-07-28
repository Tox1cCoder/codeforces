#include <bits/stdc++.h>
#include <numeric>

using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	if (n % 2 != 0)
	{
		cout << "YES" << endl;
		return;
	}
	while (n % 2 == 0)
	{
		n /= 2;
	}
	if(n > 1)
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
