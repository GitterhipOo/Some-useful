#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) //t��0��ʱ��Ϊ�� �˳� ��ס����
	{
		int n;
		cin >> n;
		int a[10] = {0};
		int x,i=0;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			while (x)
			{
				a[x % 10]++;
				x = x / 10;//ѧϰ���ȡ��������λ ���ǴӸ�λ��ʼȡ��
				//���� 59 /10���5 ��ȡ��5  
			}
		}
		int max = 0;
		for (int i = 0; i < 10; i++)
		{
			if (a[i] > max)
				max = a[i];//�����ֵ
		}
		int ans = 0;
		for (int i = 0; i < 10; i++)
		{
			if (a[i] != 0)
				ans += max-a[i];
		}
		cout << ans<<endl;
	}
	return 0;
}