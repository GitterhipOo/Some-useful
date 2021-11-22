#include<bits/stdc++.h>
#include<cstring>

using namespace std;
int main()
{
	string yl;
	getline(cin, yl);
	string jz;
	getline(cin, jz);
	int num = 0;
	for (int i = 0; i < yl.length(); i++)
		yl[i] = tolower(yl[i]);

	for (int i = 0; i < jz.length(); i++)
		jz[i] = tolower(jz[i]);  //句子和样例都得统一小写

	yl.insert(0, " ");
	yl.insert(yl.length(), " ");


	jz.insert(0, " ");
	jz.insert(jz.length(), " ");//句子和样例首位都加空格 直接find查找

	int pos = 0;

	if (jz.find(yl) ==jz.npos)//查找失败										
		cout << -1;

	while ((pos = jz.find(yl, pos)) != string::npos)
	{
		num++;
		pos++; 
	
	 //查找所有出现过的地方
	}//查找所有符合的地方并且记数
	if (jz.find(yl) != jz.npos)
	{
		cout << num << ' ';
		cout << jz.find(yl);
	}
	
}