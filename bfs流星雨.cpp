#include <bits/stdc++.h>
#include <utility>//pair的头文件
#include <queue>
using namespace std;
int fx[5] = { 0,1,-1,0,0 };
int fy[5] = { 0,0, 0,1,-1 };//方向数组
queue< pair<int, int> >q;
int a[350][350] = { 0 };//初始化为0 a用来模拟地图 
int ans[350][350] = { 0 }; //ans记录答案
int t[350][350];//记录陨石掉落的时间

int main()
{
	int num;
	cin >> num;
	memset(t, -1, sizeof(t));
	while (num--)
	{
		int x, y, ti;
		cin >> x >> y >> ti;
		if (ti < t[x][y] || t[x][y] == -1)
		{
			t[x][y] = ti;//记录最早掉落的陨石	
		}
		for (int i = 0; i < 5; i++)
		{
			if ((x + fx[i]) >= 0 && (y + fy[i]) >= 0 && (ti <= t[x + fx[i] ][y+ fy[i]] || t[x + fx[i]][y + fy[i]] == -1))
				t[x + fx[i]][y + fy[i]] = ti;
			//上下左右本身 都标记为ti  不能走
		}
	}//这个while 记录所有的陨石到达的时间 后面再进行判断能不能走

	/*for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
			cout <<t[i][j];
		cout << endl;
	}*/


	q.push(make_pair(0, 0));//让 0.0坐标形成pair并进入队列
	a[0][0] = 1;//记录为1  已经访问过  
	while (!q.empty())//队列不为空
	{
		//对队列内元素处理
		for (int i = 0; i < 5; i++)
		{
			int tx = q.front().first + fx[i];
			int ty = q.front().second + fy[i];
			//处理队列内第一个元素
			int now = ans[q.front().first][q.front().second] + 1; //现在的时间是当前点 +1 
			if (tx >= 0 && ty >= 0 && a[tx][ty] == 0 && (now < t[tx][ty] || t[tx][ty] == -1))
				//不越界 没被访问过 当前时间小于陨石落下的时间
			{
				a[tx][ty] = 1;//被走过
				ans[tx][ty] = now;// ans里面的点就是现在要记录的时间
				q.push(make_pair(tx, ty));

				if (t[tx][ty] == -1)
				{
					cout << ans[tx][ty];
					return 0;
				}
			}
		}
		q.pop();//退出
	}
	cout << -1;
	return 0;
}