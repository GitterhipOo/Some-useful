#include<bits/stdc++.h>
#include<queue>
#include <utility>//pair��ͷ�ļ�
using namespace std;
int** a;
queue< pair<int, int> >q;
int fx[4] = { 1,-1,0,0 };
int fy[4] = { 0, 0,1,-1 };//��������
int main()
{
	int n;
	cin >> n;
	a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[n];//����n���ö�ά����
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = 2;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			int num;
			cin >> num;
			if (num == 1)
				a[i][j] = 1;
		}
	//ȫ�����2
	//��ÿ���ط���ʼ�� �����û����1 ����������2 �Ͱ�������0
		for (int j = 0; j < n; j++)
		{
			if (a[0][j] == 2)
			{
				q.push(make_pair(0, j));
				a[0][j] = 0;//��¼Ϊ0  �Ѿ����ʹ� 
				while (!q.empty())//���в�Ϊ��
				{
					for (int i = 0; i < 4; i++)
					{
						int dx = q.front().first + fx[i];
						int dy = q.front().second + fy[i];
						if (dx >= 0 && dx < n && dy >= 0 && dy < n && a[dx][dy] != 1 && a[dx][dy] == 2)
						{
							a[dx][dy] = 0;
							q.push(make_pair(dx, dy));
							//�µ���ջ
						}
					}
					q.pop();
				}
			}
		}
		for (int j = 0; j < n; j++)
		{
			if (a[j][0] == 2)
			{
				q.push(make_pair(j, 0));
				a[j][0] = 0;//��¼Ϊ0  �Ѿ����ʹ� 
				while (!q.empty())//���в�Ϊ��
				{
					for (int i = 0; i < 4; i++)
					{
						int dx = q.front().first + fx[i];
						int dy = q.front().second + fy[i];
						if (dx >= 0 && dx < n && dy >= 0 && dy < n && a[dx][dy] != 1 && a[dx][dy] == 2)
						{
							a[dx][dy] = 0;
							q.push(make_pair(dx, dy));
							//�µ���ջ
						}
					}
					q.pop();
				}
			}
		}
		for (int j = 0; j < n; j++)
		{
			if (a[n-1][j] == 2)
			{
				q.push(make_pair(n-1, j));
				a[n-1][j] = 0;//��¼Ϊ0  �Ѿ����ʹ� 
				while (!q.empty())//���в�Ϊ��
				{
					for (int i = 0; i < 4; i++)
					{
						int dx = q.front().first + fx[i];
						int dy = q.front().second + fy[i];
						if (dx >= 0 && dx < n && dy >= 0 && dy < n && a[dx][dy] != 1 && a[dx][dy] == 2)
						{
							a[dx][dy] = 0;
							q.push(make_pair(dx, dy));
							//�µ���ջ
						}
					}
					q.pop();
				}
			}
		}

		for (int j = 0; j < n; j++)
		{
			if (a[j][n-1] == 2)
			{
				q.push(make_pair(j, n-1));
				a[j][n-1] = 0;//��¼Ϊ0  �Ѿ����ʹ� 
				while (!q.empty())//���в�Ϊ��
				{
					for (int i = 0; i < 4; i++)
					{
						int dx = q.front().first + fx[i];
						int dy = q.front().second + fy[i];
						if (dx >= 0 && dx < n && dy >= 0 && dy < n && a[dx][dy] != 1 && a[dx][dy] == 2)
						{
							a[dx][dy] = 0;
							q.push(make_pair(dx, dy));
							//�µ���ջ
						}
					}
					q.pop();
				}
			}
		}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j]<<" ";
		cout << endl;
	}
	return 0;
}