#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
	int num;
	cin >> num;
	set<int>a;
	set<int>::iterator it;
	for (int i = 0; i < num; i++)
	{
		int n;
		cin >> n;
		a.insert(n);
	}
	//for (it = a.begin(); it != a.end(); it++)
	//{
	//	cout << *it<<" ";
	//}
	for (auto i : a)
		cout << i;
	//c++11�������ԣ�
	//v��һ���ɱ�������������������vector���ͣ�i�������ڱ��������л���������ÿһ��Ԫ�ء�
}

	//begin();            // ����ָ���һ��Ԫ�صĵ�����
	//end();              // ����ָ�����������ĩβ���������һ��Ԫ�ص���һ��λ�ã�
	//clear();            // �������Ԫ��
	//count();            // ����ĳ��ֵԪ�صĸ���
	//empty();            // �������Ϊ�գ�����true
	//equal_range();      //���ؼ����������ֵ��ȵ������޵�����������
	//erase()�Cɾ�������е�Ԫ��
	//	find()�C����һ��ָ�򱻲��ҵ�Ԫ�صĵ�����
	//	get_allocator()�C���ؼ��ϵķ�����
	//	insert()�C�ڼ����в���Ԫ��
	//	lower_bound()�C����ָ����ڣ�����ڣ�ĳֵ�ĵ�һ��Ԫ�صĵ�����
	//	key_comp()�C����һ������Ԫ�ؼ�ֵ�Ƚϵĺ���
	//	max_size()�C���ؼ��������ɵ�Ԫ�ص������ֵ
	//	rbegin()�C����ָ�򼯺������һ��Ԫ�صķ��������
	//	rend()�C����ָ�򼯺��е�һ��Ԫ�صķ��������
	//	size()�C������Ԫ�ص���Ŀ
	//	swap()�C�����������ϱ���
	//	upper_bound()�C���ش���ĳ��ֵԪ�صĵ�����
	//	value_comp()�C����һ�����ڱȽ�Ԫ�ؼ��ֵ�ĺ���


