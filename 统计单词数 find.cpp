#include<bits/stdc++.h>
#include<cstring>

using namespace std;
int main()
{
	string yl;
	getline(cin, yl);
	string jz;
	getline(cin, jz);
	int num = 0;
	for (int i = 0; i < yl.length(); i++)
		yl[i] = tolower(yl[i]);

	for (int i = 0; i < jz.length(); i++)
		jz[i] = tolower(jz[i]);  //���Ӻ���������ͳһСд

	yl.insert(0, " ");
	yl.insert(yl.length(), " ");


	jz.insert(0, " ");
	jz.insert(jz.length(), " ");//���Ӻ�������λ���ӿո� ֱ��find����

	int pos = 0;

	if (jz.find(yl) ==jz.npos)//����ʧ��										
		cout << -1;

	while ((pos = jz.find(yl, pos)) != string::npos)
	{
		num++;
		pos++; 
	
	 //�������г��ֹ��ĵط�
	}//�������з��ϵĵط����Ҽ���
	if (jz.find(yl) != jz.npos)
	{
		cout << num << ' ';
		cout << jz.find(yl);
	}
	
}