#include<iostream>
#include<algorithm>
using namespace std;

//��Ź�����Ϣ�Ľṹ��
struct Monster
{
    int h, ark, t;
};
Monster mon[3005]; //�ṹ������ ������ÿ�����ǽṹ��  �������ܴ�������ͬ��

//����Ҫ�õ�������
bool cmp(Monster m1, Monster m2)
{
    return m1.t < m2.t;
}

int main()
{
    int h, ark, k, kh;
    int n;
    cin >> h >> ark >> k >> kh;
    cin >> n;
    int ih = h;
    for (int i = 0; i < n; i++)
    {
        cin >> mon[i].h >> mon[i].ark >> mon[i].t;
    }
    sort(mon, mon + n, cmp);//�����ﰴʱ��˳���������  ��������Ҳ������Ԫ��һ����
    int pret = 0;//ǰһ�����ﱻ����ʱ��ʱ��  
    //��������ʱ����
    for (int i = 0; i < n; i++)
    {
        if (mon[i].t < pret)//ͬʱ��������������
        {
            cout << "My Milk!";
            return 0;
        }
        if (mon[i].t - pret >= k)h = min(ih, h + kh);//��ֹ����Ѫ������
        pret = mon[i].t;
        while (mon[i].h > 0)//ģ��˫���໥����
        {
            mon[i].h -= ark;
            h -= mon[i].ark;//ע�����ҲҪ��Ѫ
            pret++;//ÿ��һ��
        }
        if (h <= 0)//һ��ʦ�����ߵ����
        {
            cout << "My Milk!";
            return 0;
        }
    }
    cout << "Mission Complete.";
    return 0;
}