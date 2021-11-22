   #include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
void quickSort(vector<long long int>& vec, int low, int high)
{//                         С������Ҫ��& 
	if (low < high)  //�ж��Ƿ����������������ݹ����ֹ����
	{
		int i = low, j = high;   //�Ѵ���������Ԫ�صĵ�һ�������һ���±�ֱ�ֵ��i,j��ʹ��i,j��������
		int x = vec[low];    //������������ĵ�һ��Ԫ����Ϊ�ڱ��������黮��Ϊ�����ڱ��Լ�С���ڱ���������                                   
		while (i < j)
		{
			while (i < j && vec[j] >= x) j--;  
			//�����Ҳ�Ԫ�ؿ�ʼ��������ڱ�����ô����λ�þ���ȷ��Ȼ���ж�ǰһ��Ԫ�أ�ֱ������������
			if (i < j) vec[i++] = vec[j];   
			//�Ѳ�����λ���������Ǹ�Ԫ��ֵ��ֵ����һ��Ԫ�أ���Ҳ�����ڱ�Ԫ�أ���ʱ�ڱ��Ѿ�������x�У����ᶪʧ������i�ļ�1
			while (i < j && vec[i] <= x) i++; 
			//��������±�Ϊi��Ԫ�ؿ�ʼ���ڱ��Ƚϴ�С������С����ô��������λ�þ���ȷ��Ȼ���жϺ�һ����ֱ������������
			if (i < j) vec[j--] = vec[i]; 
			//�Ѳ�����λ���������Ǹ�Ԫ��ֵ��ֵ���±�Ϊj��Ԫ�أ����±�Ϊj��Ԫ���Ѿ����浽ǰ�棬���ᶪʧ������j�ļ�1
		}
		vec[i] = x;   //���һ�����򣬰��ڱ���ֵ���±�Ϊi��λ�ã���ǰ��Ķ�����С������Ķ�������
		quickSort(vec, low, i - 1);  //�ݹ�����ڱ�ǰ��������Ԫ������ �� low,high��ֵ�������仯��i�����м�
		quickSort(vec, i + 1, high);
	}
}

int main()
{
	long long int num;
	cin >> num;

	vector<long long int>vec;
	for (int i = 0; i < num; i++)
	{
		long data;
		cin >> data;
	    
	}
	//sort(vec.begin(), vec.end());
	//���ÿ��ţ�
	quickSort(vec, 0, vec.size()-1);
	for (int i = 0; i < vec.size(); i++) {
		if (i != vec.size() - 1)cout << vec[i] << " ";
		else cout << vec[i] << endl;
	}
	return 0;
}