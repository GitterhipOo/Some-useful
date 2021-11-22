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
	//c++11的新特性，
	//v是一个可遍历的容器或流，比如vector类型，i就用来在遍历过程中获得容器里的每一个元素。
}

	//begin();            // 返回指向第一个元素的迭代器
	//end();              // 返回指向迭代器的最末尾处（即最后一个元素的下一个位置）
	//clear();            // 清除所有元素
	//count();            // 返回某个值元素的个数
	//empty();            // 如果集合为空，返回true
	//equal_range();      //返回集合中与给定值相等的上下限的两个迭代器
	//erase()–删除集合中的元素
	//	find()–返回一个指向被查找到元素的迭代器
	//	get_allocator()–返回集合的分配器
	//	insert()–在集合中插入元素
	//	lower_bound()–返回指向大于（或等于）某值的第一个元素的迭代器
	//	key_comp()–返回一个用于元素间值比较的函数
	//	max_size()–返回集合能容纳的元素的最大限值
	//	rbegin()–返回指向集合中最后一个元素的反向迭代器
	//	rend()–返回指向集合中第一个元素的反向迭代器
	//	size()–集合中元素的数目
	//	swap()–交换两个集合变量
	//	upper_bound()–返回大于某个值元素的迭代器
	//	value_comp()–返回一个用于比较元素间的值的函数


