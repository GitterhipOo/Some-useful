#include <bits/stdc++.h>
#include <utility>//pair��ͷ�ļ�
#include <queue>
using namespace std;
int fx[5] = { 0,1,-1,0,0 };
int fy[5] = { 0,0, 0,1,-1 };//��������
queue< pair<int, int> >q;
int a[350][350] = { 0 };//��ʼ��Ϊ0 a����ģ���ͼ 
int ans[350][350] = { 0 }; //ans��¼��
int t[350][350];//��¼��ʯ�����ʱ��

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
			t[x][y] = ti;//��¼����������ʯ	
		}
		for (int i = 0; i < 5; i++)
		{
			if ((x + fx[i]) >= 0 && (y + fy[i]) >= 0 && (ti <= t[x + fx[i] ][y+ fy[i]] || t[x + fx[i]][y + fy[i]] == -1))
				t[x + fx[i]][y + fy[i]] = ti;
			//�������ұ��� �����Ϊti  ������
		}
	}//���while ��¼���е���ʯ�����ʱ�� �����ٽ����ж��ܲ�����

	/*for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
			cout <<t[i][j];
		cout << endl;
	}*/


	q.push(make_pair(0, 0));//�� 0.0�����γ�pair���������
	a[0][0] = 1;//��¼Ϊ1  �Ѿ����ʹ�  
	while (!q.empty())//���в�Ϊ��
	{
		//�Զ�����Ԫ�ش���
		for (int i = 0; i < 5; i++)
		{
			int tx = q.front().first + fx[i];
			int ty = q.front().second + fy[i];
			//��������ڵ�һ��Ԫ��
			int now = ans[q.front().first][q.front().second] + 1; //���ڵ�ʱ���ǵ�ǰ�� +1 
			if (tx >= 0 && ty >= 0 && a[tx][ty] == 0 && (now < t[tx][ty] || t[tx][ty] == -1))
				//��Խ�� û�����ʹ� ��ǰʱ��С����ʯ���µ�ʱ��
			{
				a[tx][ty] = 1;//���߹�
				ans[tx][ty] = now;// ans����ĵ��������Ҫ��¼��ʱ��
				q.push(make_pair(tx, ty));

				if (t[tx][ty] == -1)
				{
					cout << ans[tx][ty];
					return 0;
				}
			}
		}
		q.pop();//�˳�
	}
	cout << -1;
	return 0;
}