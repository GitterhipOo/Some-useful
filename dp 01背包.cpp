#include<bits/stdc++.h>
using namespace std;
long long int a[1001][1001];
struct kk
{
	long long t;
	long long loseval;
	long long winval;
}; kk peo[10001];
int main()
{
	int n, x;
	cin >> n >> x;

	int p = n;
	int k = 1;
	while (p--)
	{
		cin >> peo[k].loseval >> peo[k].winval>>peo[k].t;
		k++;
	}

		for (int i = 1; i <= n; i++)
			for (int j = 0; j <= x; j++)
			{
				if (j < peo[i].t)
				{
					a[i][j] = a[i - 1][j] + peo[i].loseval;
				}
				else
				{
					a[i][j] = max(a[i - 1][j - peo[i].t] + peo[i].winval, a[i - 1][j] + peo[i].loseval);
				}
			}
		cout << a[n][x] * 5;
}