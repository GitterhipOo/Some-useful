#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    bool judge = true;
    vector<int>vec;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        vec.push_back(i);
    }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    /*
    17 //�ж��Ƿ�Ϊ����
18 void IsPrime(int x)
19 {
20     if (1 == x)
21     {
22         cout << "1�Ȳ�������Ҳ���Ǻ�����" << endl;
23         return;
24     }
25     for (int i = 2; i <= sqrt(x); i++)
26         if (x%i == 0)
27         {
28             cout << "�������������Ϊ������" << endl;
29             return;
30         }
31     cout << "�������������Ϊ������" << endl;
32     return;
33 }*/
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 2; j <= vec[i] / 2; ++j)
        {
            if (vec[i] % j == 0)
            {
                judge = false;
                break;
            }
        }
        if (judge && vec[i] != 1 && i != vec.size() - 1)
            cout << vec[i] << " ";

        else if (judge && vec[i] != 1)
            cout << vec[i];
    }



    return 0;
}