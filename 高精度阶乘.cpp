#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int a[500] = {0};
	
	int num;
	cin >> num;

	for (int h = 1; h <= num; h++)
	{
		a[0] = 1;
		for (int j = 1; j <= h; j++)
		{
			for (int i = 0; i < 499; i++)
			{
				a[i] = a[i] * j;
			}
			for (int i = 0; i < 499; i++)
			{
				a[i + 1] += a[i] / 10;
				a[i] = a[i] % 10;
			}
		}
		int len = 499;
		while (a[len-1] == 0 && len > 1)//���ָ߾��ȼӷ� ���ﲻ��len+las-1 ��Ϊlen��las��������һ�����÷��� �൱���Դ�-1
			len--;  //һ��Ҫ�ǵ�len>1
		cout << h << "! = ";
		for (int i = len-1; i >= 0; i--)
		{
			if(i!=0)
			cout << a[i];
			if (i == 0)
				cout << a[i] << endl;
		}
		for (int i = len; i >= 0; i--)
			a[i] = 0;
	}
}
