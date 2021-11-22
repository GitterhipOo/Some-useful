#include<bits/stdc++.h>
#include<vector>
using namespace std;

int zt(int m, int n)
{
	if (n > m)
		return zt(n, m);

    if (m ==n)
		return 4 *n;

	else if (m > n)
	{
	if (n == 1)return 4 * m;

		m = m - n;
		return zt(m, n)+4*n;
	}

}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n;
		cin >> m >> n;
		cout << zt(m, n)<<endl;
	}
	
	return 0;
}

