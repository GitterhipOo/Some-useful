#include<stdio.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int ge, shi, bai, qian = 0;
	if (n > 0 && n <= 9)
		cout << n;

	else if(n<18 && n>9)
	{
		ge = 9;
		shi = n - ge;
		cout << shi << ge;
	}

	else if (n > 18 && n<=27)
	{
		ge = 9;
		shi = 9;
		bai = n - ge - shi;
		cout << bai << shi << ge;
	}
	else if (n > 27 && n<36)
	{
		ge = 9;
		shi = 9;
		bai = 9;
		qian = n - 9 - 9 - 9;
		cout << qian << bai << shi << ge;
	}

	


	return 0;
}