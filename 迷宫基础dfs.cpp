#include <bits/stdc++.h>
#include <vector>
using namespace std;
int** a;//ȫ��������̬��ά
int T;//�ϰ�����
int sx, sy;//������ꣻ
int fx, fy;//�յ�����;
int zax, zay;//�ϰ�����
int ans=0;
int mx[4] = { 0,1,0,-1 };    //�ƶ�
int my[4] = { 1,0,-1,0 };
void judge(int row, int lie)
{
	if (row  == fx && lie == fy)
	{
		ans++;
		return;
	}//�ߵ��յ� ����
		a[row][lie] = 1;
		for (int i = 0; i < 4; i++)    //�����ƶ���ʽ
		{
			if( a[row + mx[i]][lie + my[i]]!=1)
			judge(row + mx[i], lie + my[i]);//ѭ���ĸ���������
		}
		a[row][lie] = 0;//����
}

int main()
{
	int N, M;//NΪ�У�MΪ��
	cin >> N >> M;
	a = new int* [M+2];
	for (int i = 0; i < M+2; i++)
		a[i] = new int[N+2];//+2�ǿ���һ����װΧǽ

	for (int i = 0; i < N+2; i++)
		for (int j = 0; j < M+2; j++)
			a[i][j] = 0;// ���ö�ά��̬

	for (int j = 0; j < M + 2; j++)
	{
		a[0][j] = 1;//Χǽ��Ϊ1
		a[j][0] = 1;
	}

	for (int j = M+1; j >=0; j--)
	{
		a[M+1][j] = 1;//Χǽ��Ϊ1
		a[j][M+1] = 1;
	}
	cin >> T;
	cin >> sx >> sy;
	cin >> fx >> fy;
	for (int i = 0; i < T; i++)
	{
		cin >> zax >> zay;
		a[zax][zay] = 1;//�ϰ����Ϊ1
	}
	a[sx][sy] = 1;//�������Ϊ�ϰ�
	judge(sx, sy);
	cout << ans<<endl;
	return 0;
}