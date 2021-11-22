#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int>vec;
	int a;
	while ( cin>>a)
	{
		vec.push_back(a);
		if (cin.get() == '\n')
			break;// 当输入回车结束 cin。get本身算一次输入 这里是缓冲区的回车
	}

}