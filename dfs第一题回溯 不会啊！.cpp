#include <bits/stdc++.h>
using namespace std;
int ans = 0, n, k, a[20];
bool prime(int x) {
	int i;
	for (i = 2; i <= floor(sqrt(x)); i++) 
	{
		if (x % i == 0) 
		return false;
	}
	return true;
}
//����������������
void rec(int start, int count, int sum) {
	//rec���ݹ�Ӣ��recursion��д
	//start����ʼѡ���ĵط�
	//count���Ѿ�ѡ�˼�����
	//sum����ĿǰΪֹѡ�����ĺ�
	int i;
	if (count == k && prime(sum)) {ans++;}

	for (i = start; i <= n; i++) 
	{
		//�ӿ�ʼѡ���ĵط���n
		//ÿ��ѭ������һ�ֿ�����
	//���磺ѡ�ڶ�������start=2,n=4,�����ֿ����ԣ���������3��
		rec(i + 1, count + 1, sum + a[i]);
		//����1����a������һ������ʼѡ
		//����2���Ѿ�ѡ�����ĸ���+1
		//����3��sum�������ѡ����
		//��Ϊֱ�Ӵ���һ������ʼѡ�����Բ�����ѡ��֮ǰѡ������
		//�����жϵ�ǰ�����Ƿ�ѡ��
	}
}
int main() {
	int i;
	cin >> n >> k;
	for (i = 1; i <= n; i++) {cin >> a[i];}
	rec(1, 0, 0);
	//�ӵ�һ������ʼ�ң��Ѿ�����0������Ŀǰ�ĺ���0
	cout << ans << endl;
	return 0;
}
