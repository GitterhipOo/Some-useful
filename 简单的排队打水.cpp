#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct kk
{
	int a;
	int loca;
	int time;
};
kk peo[1001];
bool cmp(kk m1, kk m2)
{
	return m1.a < m2.a;//½µÐòÅÅÁÐshang
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin>>peo[i].a;
		peo[i].loca=i+1;
	}
	sort(peo, peo+n,cmp);
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += peo[i].a * (n - i - 1);
	}
	for (int i = 0; i < n; i++)
	{
		if(i!=n-1)
		cout << peo[i].loca << " ";

		else if (i == n - 1)
			cout << peo[i].loca<<endl;
	}
	cout <<fixed <<setprecision(2)<<sum / n;
	return 0;
}