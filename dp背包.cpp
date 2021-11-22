#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
struct kk 
{
	int t;
	int val;
};
kk y[105];
int main()
{
	int T, num;//T 是可以用的总时间，num是山里的草药总数
	cin >> T >> num;
	int k = 1;
	int l = num;
	while (l--)
	{
		cin >> y[k].t >> y[k].val;
		k++;
	}

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= T; j++)
		{
			if (y[i].t > j)
			{
				a[i][j] = a[i - 1][j];
			}
			else
			{
				a[i][j] = max(a[i - 1][j], a[i - 1][j - y[i].t] + y[i].val);
			}
		}
	}

	/*for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= T; j++)
			cout << a[i][j];
		cout << endl;
	}*/
			
cout << a[num][T];
	return 0;
}