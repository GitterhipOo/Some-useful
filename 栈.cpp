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
stack<int>q;//栈q 
int p, n;//p组数据，n为序列长度 
int main()
{
	cin >> p;
	while (p--)
	{
		cin >> n;
		int a[n + 1], b[n + 1], sum = 1;//入栈队列a，待检验队列b，计数器sum 
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		for (int i = 1; i <= n; i++)
			cin >> b[i];//平平无奇的输入 
		for (int i = 1; i <= n; i++)
		{
			q.push(a[i]);//入栈 
			while ((q.top()) == b[sum])//当栈顶元素与b中当前元素相同时出栈 
			{
				q.pop(), sum++;//sum++到b下一个元素 
				if (q.empty())break;//注意这里，第一次RE就因为当栈空时还用了出栈操作，所以要手动结束循环 
			}
		}
		if (q.empty()) cout << "Yes" << endl;//如果栈为空说明出栈序列b正确 
		else cout << "No" << endl;
		while (!q.empty())q.pop();//清空栈 
	}
	return 0;//谢幕 
}
