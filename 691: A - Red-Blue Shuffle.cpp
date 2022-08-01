#include <bits/stdc++.h>
#include <numeric>

using namespace std;
typedef long long ll;

void solve()
{
	int n;
	cin >> n;
	string r, b;
	cin >> r >> b;

	int x = 0;
	int y = 0;

	for (int i = 0; i < n; i++)
	{
		if(r[i] > b [i])
			x++;
		else if(r[i] < b [i])
			y++;
	}
	if(x > y)
		cout << "RED" << endl;
	else if (y > x)
		cout << "BLUE" << endl;
	else
		cout << "EQUAL" << endl;
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
