#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;
int c[50300] = {0}, a1[51000], b1[51000];
int main()
{

	string a, b;//�����ַ���a b
	cin >> a >> b;//���������a,b��
	int l = 0, s = 0;

	for (int i = a.length() - 1; i >= 0; i--)
		//a.length()�Ǽ����ַ������ȵĹ���
		a1[i] = a[l++] - '0';  //���ַ�ת�������ֵ�ͬʱ���ַ������з�ת
	//���ַ�����ÿһλ�����򴢴浽������

	for (int i = b.length() - 1; i >= 0; i--)
		b1[i] = b[s++] - '0';//��Ҫ����-0
	//��Ϊ�ַ�����������ASCII�봢�� ת��Ϊ���ֵ�ʱ���ת��ΪASCII��Ӧ������
	//���Լ�ȥ��0������������ȷ������

	int len = max(a.length(), b.length()) + 1;
	//����һ������Ϊa��b�ַ������߼�ϳ��ĳ���
	for (int i = 0; i < len; i++)
	{
		c[i] = a1[i] + b1[i] + c[i];
		c[i + 1] = c[i] / 10;   //��λ��������ǰһλ�õ�����ʮ���ۼӵ���һλ��
		c[i] = c[i] % 10;//�õ�������c����
	}
	while (c[len - 1] == 0 && len > 1)
		len--;  //һ��Ҫ�ǵ�len>1
	//����Ĳ����ǽ��������������ǰ����
	for (int i = len - 1; i >= 0; i--)
		cout << c[i];
}