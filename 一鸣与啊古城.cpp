#include<iostream>
#include<algorithm>
using namespace std;

//存放怪物信息的结构体
struct Monster
{
    int h, ark, t;
};
Monster mon[3005]; //结构体数组 数组内每个都是结构体  这样就能带着数据同步

//排序要用的排序函数
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
    sort(mon, mon + n, cmp);//将怪物按时间顺序进行排序  这里排序也是三个元素一起排
    int pret = 0;//前一个怪物被消灭时的时间  
    //用秒来做时间轴
    for (int i = 0; i < n; i++)
    {
        if (mon[i].t < pret)//同时有两个怪物的情况
        {
            cout << "My Milk!";
            return 0;
        }
        if (mon[i].t - pret >= k)h = min(ih, h + kh);//防止超过血量上限
        pret = mon[i].t;
        while (mon[i].h > 0)//模拟双方相互攻击
        {
            mon[i].h -= ark;
            h -= mon[i].ark;//注意怪物也要扣血
            pret++;//每次一秒
        }
        if (h <= 0)//一鸣师姐休眠的情况
        {
            cout << "My Milk!";
            return 0;
        }
    }
    cout << "Mission Complete.";
    return 0;
}