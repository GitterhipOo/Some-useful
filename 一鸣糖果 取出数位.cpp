#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) //t到0的时候为假 退出 记住操作
	{
		int n;
		cin >> n;
		int a[10] = {0};
		int x,i=0;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			while (x)
			{
				a[x % 10]++;
				x = x / 10;//学习如何取出各个数位 这是从个位开始取出
				//比如 59 /10变成5 再取出5  
			}
		}
		int max = 0;
		for (int i = 0; i < 10; i++)
		{
			if (a[i] > max)
				max = a[i];//求最大值
		}
		int ans = 0;
		for (int i = 0; i < 10; i++)
		{
			if (a[i] != 0)
				ans += max-a[i];
		}
		cout << ans<<endl;
	}
	return 0;
}