#include <bits/stdc++.h>
#include <vector>
using namespace std;
int** a;//全局声明动态二维
int T;//障碍总数
int sx, sy;//起点坐标；
int fx, fy;//终点坐标;
int zax, zay;//障碍坐标
int ans=0;
int mx[4] = { 0,1,0,-1 };    //移动
int my[4] = { 1,0,-1,0 };
void judge(int row, int lie)
{
	if (row  == fx && lie == fy)
	{
		ans++;
		return;
	}//走到终点 计数
		a[row][lie] = 1;
		for (int i = 0; i < 4; i++)    //四种移动方式
		{
			if( a[row + mx[i]][lie + my[i]]!=1)
			judge(row + mx[i], lie + my[i]);//循环四个方向数组
		}
		a[row][lie] = 0;//回溯
}

int main()
{
	int N, M;//N为行，M为列
	cin >> N >> M;
	a = new int* [M+2];
	for (int i = 0; i < M+2; i++)
		a[i] = new int[N+2];//+2是开多一点来装围墙

	for (int i = 0; i < N+2; i++)
		for (int j = 0; j < M+2; j++)
			a[i][j] = 0;// 开好二维动态

	for (int j = 0; j < M + 2; j++)
	{
		a[0][j] = 1;//围墙设为1
		a[j][0] = 1;
	}

	for (int j = M+1; j >=0; j--)
	{
		a[M+1][j] = 1;//围墙设为1
		a[j][M+1] = 1;
	}
	cin >> T;
	cin >> sx >> sy;
	cin >> fx >> fy;
	for (int i = 0; i < T; i++)
	{
		cin >> zax >> zay;
		a[zax][zay] = 1;//障碍物调为1
	}
	a[sx][sy] = 1;//起点设置为障碍
	judge(sx, sy);
	cout << ans<<endl;
	return 0;
}