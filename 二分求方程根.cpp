#include<bits/stdc++.h>
using namespace std;
#define end 0.000001
double fx(double ans)
{
    return (2 * ans * ans * ans - 4 * ans * ans + 3 * ans - 6);
}
int main() 
{
    double x1 = -10;
    double x2 = 10;
    double ans = 0;
    while (abs(fx(ans) - 0) > 0.000001)
    {
        ans = (x1 + x2) / 2;
        if ((fx(ans)) * (fx(x1)) > 0)
            x1 = ans;
        if ((fx(ans)) * (fx(x1)) < 0)
            x2 = ans;
    }
    cout <<fixed<<setprecision(6)<< ans;

    return 0;
}