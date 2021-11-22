# include <bits/stdc++.h>
using namespace std;
# define EXIT cout << n, exit(0)
const int maxN = 2505;
int n, m;
int a[maxN], b[maxN], ans[maxN];
void add();
int main() {
	cin >> n;
	if (n < 3) EXIT;
	add();
	for (int i = m; i; --i) cout << ans[i];
	return 0;
}
void add() {
	a[1] = 1;
	b[1] = 2;
	m = 1;
	for (int i = 3; i <= n; ++i) 
	{
		for (int j = 1; j <= m; ++j) 
			ans[j] = a[j] + b[j];

		for (int j = 1; j <= m; ++j)
			if (ans[j] > 9) 
			{
				ans[j] -= 10;
				++ans[j + 1];
				if (j == m) ++m;
			}
		for (int j = 1; j <= m; ++j) 
			a[j] = b[j], b[j] = ans[j];
	}
}