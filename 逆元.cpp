#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,i;
    cin >> m >> i;
    for (int n = 1; n < 700000; n++) {
        if (i * n % m == 1) {
            printf("%d\n", n);
            break;
        }
    }//i*n mod m==1  �� Ϊi��ģm�����µ���Ԫ
    return 0;
}