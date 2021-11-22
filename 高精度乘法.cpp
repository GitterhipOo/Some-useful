#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
 	string a, b;
	cin >> a >> b;
	if (a == "0" || b == "0")
		cout << 0; //特判0 直接剪枝
	else {
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		int len = max(a.length(), b.length()) + 1;
		int las = min(a.length(), b.length()) + 1;
		int c[50300] = { 0 }, a1[51000] = { 0 }, b1[51000] = { 0 }; int m[50300] = { 0 };
		for (int i = 0; i < a.length(); i++)
			a1[i] = a[i] - 48;
		for (int i = 0; i < b.length(); i++)
			b1[i] = b[i] - 48;//输入数据并转换成倒序的数组
		int count = 0;

		for (int j = 0; j < las; j++)
		{
			for (int i = 0; i < len; i++)
			{
				c[i + count] = c[i + count] + (a1[i] * b1[j]);
				c[i + 1 + count] = c[i + count] / 10;
				c[i + count] = c[i + count] % 10;
			}
			for (int i = 0; i < len + las; i++)
			{
				m[i] = c[i] + m[i];
				c[i] = 0;
			}

			count++;
		}
		for (int i = 0; i < len + las; i++)
		{
			if (m[i] > 9)
			{
				m[i + 1] += m[i] / 10;
				m[i] = m[i] % 10;//注意这里 每一位都有数字了 所以要加上原来的 区别高精加法
			}
		}

		while (m[len + las] == 0 && len + las > 1)//区分高精度加法 这里不用len+las-1 因为len和las都包括了一个无用符号 相当于自带-1
			len--;  //一定要记得len>1
		for (int i = len + las; i >= 0; i--)
			cout << m[i];
	}
}

