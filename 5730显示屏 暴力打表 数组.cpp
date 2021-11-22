#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char a[1000];
	string haha[10000];
	
	for (int i=1; i<=n ; i++) 
	{
		cin >> a[i];
		if (a[i]=='0')
		{
			haha[1] += "XXX.";
			haha[2] += "X.X.";
			haha[3] += "X.X.";
			haha[4] += "X.X.";
			haha[5] += "XXX.";
		}
		if (a[i] =='1')
		{
			haha[1] += "..X.";
			haha[2] += "..X.";
			haha[3] += "..X.";
			haha[4] += "..X.";
			haha[5] += "..X.";

		}
		if (a[i] =='2')
		{
			haha[1] += "XXX.";
			haha[2] += "..X.";
			haha[3] += "XXX.";
			haha[4] += "X...";
			haha[5] += "XXX.";
		}
		if (a[i] =='3')
		{
			haha[1] += "XXX.";
			haha[2] += "..X.";
			haha[3] += "XXX.";
			haha[4] += "..X.";
			haha[5] += "XXX.";
		}
		if (a[i] == '4')
		{
			haha[1] += "X.X.";
			haha[2] += "X.X.";
			haha[3] += "XXX.";
			haha[4] += "..X.";
			haha[5] += "..X.";
		}
		if (a[i] =='5')
		{
			haha[1] += "XXX.";
			haha[2] += "X...";
			haha[3] += "XXX.";
			haha[4] += "..X.";
			haha[5] += "XXX.";
		}
		if (a[i] =='6')
		{
			haha[1] += "XXX.";
			haha[2] += "X...";
			haha[3] += "XXX.";
			haha[4] += "X.X.";
			haha[5] += "XXX.";
		}
		if (a[i] == '7')
		{
			haha[1] += "XXX.";
			haha[2] += "..X.";
			haha[3] += "..X.";
			haha[4] += "..X.";
			haha[5] += "..X.";
		}
		if (a[i] == '8')
		{
			haha[1] += "XXX.";
			haha[2] += "X.X.";
			haha[3] += "XXX.";
			haha[4] += "X.X.";
			haha[5] += "XXX.";
		}
		if (a[i] == '9')
		{
			haha[1] += "XXX.";
			haha[2] += "X.X.";
			haha[3] += "XXX.";
			haha[4] += "..X.";
			haha[5] += "XXX.";
		}
	

	}


	for (int i = 1; i <= 5; i++)
	{
		haha[i] = haha[i].substr(0, haha[i].length() - 1);
		cout << haha[i] << endl;
	}
	return 0;
}
