#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	long double t;
	cin >> t;
	int m;
	m = t / 60;
	int f[1700000];
	f[0] = 0;
	f[1] = 1;
	f[2] = 1;
	f[3] = 1;
	for (int i = 4; i < m+1; i++)
	{
		f[i] = (((f[i - 3]%425 + f[i - 2]%425) % 425)%425 + f[i - 1] % 425) % 425;
	}
	/*
	(a + b) % p = (a%p + b%p) %p

	(a - b) % p = ((a % p - b % p) + p) % p

	(a * b) % p = (a % p) * (b % p) % p
	*/
	cout << f[m];

}