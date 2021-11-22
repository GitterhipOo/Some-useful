#include<bits/stdc++.h>
#include<vector>
using namespace std;
 int main()
{
	 string a, b;
	 cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int len = max(a.length(), b.length())+1;
	int c[50300] = {0}, a1[51000] = { 0 }, b1[51000] = { 0 };
	for(int i=0;i<a.length();i++)
	{
		a1[i] = a[i]-48;
	}
	for (int i = 0; i < b.length(); i++)
	{
		b1[i] = b[i] - 48;
	}

	for (int i = 0; i < len; i++)
	{
		c[i] = c[i] + a1[i] + b1[i];
		c[i + 1] = c[i] / 10;
		c[i] = c[i] % 10;
	}
	while (c[len - 1] == 0 && len > 1)
		len--;  //一定要记得len>1
	for (int i = len - 1; i >= 0; i--)
	
		cout<<c[i];
}

