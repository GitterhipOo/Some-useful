#include <bits/stdc++.h>
#include <utility>//pair��ͷ�ļ�
#include <queue>
using namespace std;
int dx[8] = { -2,-2,2,2,1,-1,1,-1 };
int dy[8] = { -1,1,-1,1,2,-2,-2,2 };
//�������� 
queue<int>q, q1;
int ans[401][401],a[401][401];//һ������ģ��  ans������¼��
int main()
{
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	memset(ans, -1, sizeof(ans));//��ʼ��Ϊ-1
	q.push(x);
	q1.push(y);
	ans[x][y] = 0;
	a[x][y] = 1;
	while (!q.empty())//�����л������ߵĵ�
	{
		for (int i = 0; i < 8; i++)
		{
			int tx = q.front() + dx[i];
			int ty = q1.front() + dy[i];
			if (tx > 0 && tx <= n && ty > 0 && ty <= m && a[tx][ty] == 0)
				//û�б����ʹ� ���Ҳ�Խ�� ���ѵ�һ�α����ʾ������Ž�
			{
				a[tx][ty] = 1;
				//��¼Ϊ�����ʹ�
				ans[tx][ty] = ans[q.front()][q1.front()] + 1;
				//��һ����λ��+1 ������һ����Ҫ�Ĳ���

				q.push(tx);
				q1.push(ty);//����������У���������  ��ɴ����������
				//��һ��ѭ�������µ��½Ŵ���ʼ����
			}
		}
		q.pop();
		q1.pop();//�˸�����û�п����½ŵĵط� ���˵��������  
		// �����˾ͽ���ѭ��   
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			printf("%-5d", ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}

	













