#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;
struct kk
{
	int a=0;
	int b=0;
	int loca=0;
	int cha;
};
bool cmp(kk m1, kk m2)
{
	if (m1.a != m2.a)
		return m1.a < m2.a;
	return m1.cha < m2.cha;
}
int main()
{
	kk cai[1001];
	kk caiji[1001];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)	
		cin >> cai[i].a;

	for (int i = 0; i < n; i++)
		cin >> cai[i].b;

	for (int i = 0; i < n; i++)
	{
		cai[i].loca=i+1;
		caiji[i].loca = i + 1;
		caiji[i].a = cai[i].a*cai[i].b;
		caiji[i].cha = abs(cai[i].a - cai[i].b);
	}
	sort(caiji, caiji+ n, cmp);
	for (int i = 0; i < n; i++)
	{
		cout << caiji[i].loca << " " << caiji[i].a<<endl;
	}
	return 0;
}