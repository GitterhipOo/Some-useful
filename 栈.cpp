//#include <bits/stdc++.h>
//#include <stack>
//using namespace std;
//int main()
//{
//	
//	int num;
//	cin >> num;
//	while (num--)
//	{
//		int q;
//		cin >> q;
//		bool judge = true;
//		stack<int>a;
//		int b[100001];
//			for (int i = 0; i < q; i++)
//			{
//				int n;
//				cin >> n;
//				a.push(n);
//			}
//			for (int i = 0; i < q; i++)
//			{
//				cin >> b[i];
//			}
//
//			for (int i = 0; i < q; i++)
//			{
//				if (a.top() != b[i] &&  !a.empty())
//				{
//					judge = false;
//					a.pop();
//				}
//				else if ( !a.empty()&&a.top() == b[i])
//				{
//						a.pop();
//				}
//			}
//			if (judge)
//				cout << "Yes"<<endl;
//			else cout << "No" << endl;
//
//		}
//	}
//
//
//
//
//
//
#include<iostream>
#include<stack>
using namespace std;
stack<int>q;//ջq 
int p, n;//p�����ݣ�nΪ���г��� 
int main()
{
	cin >> p;
	while (p--)
	{
		cin >> n;
		int a[n + 1], b[n + 1], sum = 1;//��ջ����a�����������b��������sum 
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		for (int i = 1; i <= n; i++)
			cin >> b[i];//ƽƽ��������� 
		for (int i = 1; i <= n; i++)
		{
			q.push(a[i]);//��ջ 
			while ((q.top()) == b[sum])//��ջ��Ԫ����b�е�ǰԪ����ͬʱ��ջ 
			{
				q.pop(), sum++;//sum++��b��һ��Ԫ�� 
				if (q.empty())break;//ע�������һ��RE����Ϊ��ջ��ʱ�����˳�ջ����������Ҫ�ֶ�����ѭ�� 
			}
		}
		if (q.empty()) cout << "Yes" << endl;//���ջΪ��˵����ջ����b��ȷ 
		else cout << "No" << endl;
		while (!q.empty())q.pop();//���ջ 
	}
	return 0;//лĻ 
}
