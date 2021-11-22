#include <bits/stdc++.h>
using namespace std;
int a[16][16] = { 0 };
int cou = 0;
int num;
int ans[14];
int wz = 0;
int lie1;
int dycs = 1;
bool judge(int row, int lie,int num)//判断是否能下脚
{
	int i, k;
	for (i = 0; i < num; i++)
	{
		if (a[i][lie] == 1)
			return false;

	}//判断十字内有无危险区域
	
	for (i = row, k = lie; i >= 0 && k >= 0; i--, k--)
	{
		if (a[i][k] == 1)
			return false;
	}
	for (i = row, k = lie; i >= 0&& k <num; i--, k++)
	{
		if (a[i][k] == 1)
			return false; //只要判断棋子上半部分的两个对角线就行了
		//因为棋子是从0往下摆的
	}
	return true;
}

void Print()          //打印结果 
{
	if (dycs <= 3) 
	{
		int row, col;
		for (row = 0; row < num; row++)
		{
			for (col = 0; col < num; col++)
			{
				if (a[row][col] == 1)        //皇后用‘0’表示
				{
					cout << col + 1 << " ";
				}
			}
		}
		dycs++;
		cout << endl;
	}
}

void EightQueen(int row)
{
	int col;
	if (row >= num )                       //如果遍历完num行都找到放置皇后的位置则打印
	{                   //打印八皇后的解 
		cou++;
		Print();
		return;
	}



	for (col = 0; col < num; col++)        //回溯，递归
	{
		if (judge(row, col,num))    // 判断是否危险
		{
			a[row][col] = 1;
			EightQueen(row + 1);

			a[row][col] = 0;           //清零，以免回溯时出现脏数据
		}
	}
}

int main() 
{
	cin >> num;
	EightQueen(0);
	cout << cou;
	return 0;
}


