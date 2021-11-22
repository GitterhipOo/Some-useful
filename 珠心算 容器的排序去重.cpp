#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum = 1;
	int num = 0;
	int ans = 0;
	int a[100000] = { 0 };
	vector<int> vec;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		a[i] = num;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j=1+i; j < n; j++)
		{
			vec.push_back(a[i] + a[j]); ;
		}
	}

	sort(vec.begin(), vec.end());//ÅÅÐò
	vec.erase(    unique(  vec.begin(), vec.end()  ), vec.end()    ); //ÅÅÐòÒÔºó²Á³ýÎ²²¿

	//for (int i = 0; i < vec.size(); i++)
	{
		//cout << vec[i];
	}
	
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (vec[i] == a[j])
				ans++;
		}
	}


	cout << ans;
	return 0;
}