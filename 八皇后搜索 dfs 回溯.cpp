#include <bits/stdc++.h>
using namespace std;
int a[16][16] = { 0 };
int cou = 0;
int num;
int ans[14];
int wz = 0;
int lie1;
int dycs = 1;
bool judge(int row, int lie,int num)//�ж��Ƿ����½�
{
	int i, k;
	for (i = 0; i < num; i++)
	{
		if (a[i][lie] == 1)
			return false;

	}//�ж�ʮ��������Σ������
	
	for (i = row, k = lie; i >= 0 && k >= 0; i--, k--)
	{
		if (a[i][k] == 1)
			return false;
	}
	for (i = row, k = lie; i >= 0&& k <num; i--, k++)
	{
		if (a[i][k] == 1)
			return false; //ֻҪ�ж������ϰ벿�ֵ������Խ��߾�����
		//��Ϊ�����Ǵ�0���°ڵ�
	}
	return true;
}

void Print()          //��ӡ��� 
{
	if (dycs <= 3) 
	{
		int row, col;
		for (row = 0; row < num; row++)
		{
			for (col = 0; col < num; col++)
			{
				if (a[row][col] == 1)        //�ʺ��á�0����ʾ
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
	if (row >= num )                       //���������num�ж��ҵ����ûʺ��λ�����ӡ
	{                   //��ӡ�˻ʺ�Ľ� 
		cou++;
		Print();
		return;
	}



	for (col = 0; col < num; col++)        //���ݣ��ݹ�
	{
		if (judge(row, col,num))    // �ж��Ƿ�Σ��
		{
			a[row][col] = 1;
			EightQueen(row + 1);

			a[row][col] = 0;           //���㣬�������ʱ����������
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


