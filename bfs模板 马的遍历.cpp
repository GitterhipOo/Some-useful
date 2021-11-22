#include <bits/stdc++.h>
#include <utility>//pair的头文件
#include <queue>
using namespace std;
int dx[8] = { -2,-2,2,2,1,-1,1,-1 };
int dy[8] = { -1,1,-1,1,2,-2,-2,2 };
//方向数组 
queue<int>q, q1;
int ans[401][401],a[401][401];//一个用来模拟  ans用来记录答案
int main()
{
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	memset(ans, -1, sizeof(ans));//初始化为-1
	q.push(x);
	q1.push(y);
	ans[x][y] = 0;
	a[x][y] = 1;
	while (!q.empty())//队列中还有能走的点
	{
		for (int i = 0; i < 8; i++)
		{
			int tx = q.front() + dx[i];
			int ty = q1.front() + dy[i];
			if (tx > 0 && tx <= n && ty > 0 && ty <= m && a[tx][ty] == 0)
				//没有被访问过 并且不越界 广搜第一次被访问就是最优解
			{
				a[tx][ty] = 1;
				//记录为被访问过
				ans[tx][ty] = ans[q.front()][q1.front()] + 1;
				//上一步的位置+1 就是这一步需要的步数

				q.push(tx);
				q1.push(ty);//行列推入队列，基本操作  变成待处理的数据
				//下一次循环将从新的下脚处开始搜索
			}
		}
		q.pop();
		q1.pop();//八个方向都没有可以下脚的地方 就退掉这个数据  
		// 退完了就结束循环   
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			printf("%-5d", ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}

	













