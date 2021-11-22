#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct kk 
{
	double a;
	double b;
	double shang;

};
kk jz[1001];
bool cmp(kk m1,kk m2)
{
	return m1.shang > m2.shang;//降序排列shang
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> jz[i].a;
	for (int i = 0; i < n; i++)
		cin >> jz[i].b;
	for (int i = 0; i < n; i++)
	   jz[i].shang=jz[i].a/jz[i].b;
	double sum = 0;
	sort(jz, jz + n, cmp);//升序排列shang  本次贪心为商最大开始贪心
	while(jz[0].a!=0)
	{
		for (int i = 0; i < n; i++)
			sum += jz[i].a;// 记录总和
		jz[0].b--;

		jz[0].a -= jz[0].shang;

		if(jz[0].b!=0)
		jz[0].shang = jz[0].a / jz[0].b;

		if (jz[0].b == 0)
		{
			jz[0].a = 0; 
			jz[0].shang = 0;
		}
		sort(jz, jz + n, cmp);
	}
	cout <<fixed<<setprecision(6)<< sum;
}