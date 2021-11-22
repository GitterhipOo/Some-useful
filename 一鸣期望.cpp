#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string error = "error";
	string war ="warning";
	while (t--)
	{
		int num;
		cin >> num;
		string a;
		cin >> a;
		int judge = 0;
		for (int j = 0; j < 26; j++)
		{
			for (int i = 0; i < num; i++)
			{
				a[i] = ((a[i] - 96 + j) % 26 + 1) + 96;//iµÄÖµ
			}
			if (a.find(error) == a.npos && a.find(war) == a.npos)
				judge = 1;
		}

		if (judge == 1)
			cout << "0 error(s), 0 warning(s)"<<endl;
		else cout << "Oops!"<<endl;

	}
	return 0;
}