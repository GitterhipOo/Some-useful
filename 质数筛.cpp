#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[105],b[105];
	int num;
	cin >> num;
	int cou = 0;
	bool judge = true;
	for (int i = 0; i < num; i++)
	{
		bool judge = true;
		cin >> a[i];
		for (int j = 2; j <= a[i] / 2; j++)
		{
			if (a[i] % j == 0)
			{
				judge = false;
				break;
			}
		}
		if (judge == true && a[i]!=1)
		{
			b[cou] = a[i];
			cou++;
		}
	}
	for (int i = 0; i < cou; i++)
		cout << b[i]<<" ";

}