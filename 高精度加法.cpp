#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;
int c[50300] = {0}, a1[51000], b1[51000];
int main()
{

	string a, b;//创建字符串a b
	cin >> a >> b;//输入待加数a,b；
	int l = 0, s = 0;

	for (int i = a.length() - 1; i >= 0; i--)
		//a.length()是计算字符串长度的工具
		a1[i] = a[l++] - '0';  //将字符转化成数字的同时将字符串进行翻转
	//把字符串的每一位都逆序储存到数组中

	for (int i = b.length() - 1; i >= 0; i--)
		b1[i] = b[s++] - '0';//不要忘记-0
	//因为字符串中数字以ASCII码储存 转换为数字的时候会转换为ASCII对应的数字
	//所以减去‘0’后正好是正确的数字

	int len = max(a.length(), b.length()) + 1;
	//定义一个常量为a和b字符串两者间较长的长度
	for (int i = 0; i < len; i++)
	{
		c[i] = a1[i] + b1[i] + c[i];
		c[i + 1] = c[i] / 10;   //进位操作，将前一位得到的整十倍累加到后一位。
		c[i] = c[i] % 10;//得到整理后的c数组
	}
	while (c[len - 1] == 0 && len > 1)
		len--;  //一定要记得len>1
	//这里的操作是将逆序的数组多余的前导零
	for (int i = len - 1; i >= 0; i--)
		cout << c[i];
}