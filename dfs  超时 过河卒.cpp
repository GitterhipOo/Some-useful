#include<bits/stdc++.h>
#include<queue>
using namespace std;
int a[40][40];//储存状态
queue<int>q;
int ans[40][40];//记录有无走过
int mx[8]= { -2,-2,2,2,1,-1,1,-1 };
int my[8]= { -1,1,-1,1,2,-2,-2,2 };
//马的方向
int zx[2] = { 1,0 };
int zy[2] = { 0,1 };
//人的方向
int n, m, n1, m1;
int sum = 0;


void rec(int x, int y)
{
	int xi, yi;
	if (x == n && y == m)
	{
		sum++;
		return;
	}
	else
	{
		for (int i = 0; i < 2; i++)
		{
			xi = x + zx[i];
			yi = y + zy[i];
			if (a[xi][yi]==0 && ans[xi][yi] == 0 && xi >= 0 && yi >= 0 )
			{
				if (xi > n || yi > m)
					continue;//？？？？？？？？？不懂
				//猜测 判断走超过以后就不要继续深入了 不然没有回头的机会
				ans[xi][yi] = 1;
				rec(xi, yi);
				ans[xi][yi] = 0;
			}
		}
		return;
	}
}

int main()
{
	for (int i = 0; i < 40; i++)
		for (int j = 0; j < 40; j++)
			a[i][j] = 0;
	//做马的标记为1

	cin >> n >> m >> n1 >> m1;
	for (int i = 0; i < 8; i++)
	{
		if(n1+mx[i]>=0 && m1+my[i]>=0)
		a[n1 + mx[i]][m1 + my[i]] = 1;
	}
	a[n1][m1] = 1;
	ans[0][0] = 1;

	/*for (int i = 0; i < 40; i++)
	{
		for (int j = 0; j < 40; j++)
			cout << a[i][j]<<" ";
		cout << endl;
	}*/

	rec(0, 0);
	cout << sum;
	return 0;

}

