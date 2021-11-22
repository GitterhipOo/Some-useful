#include<bits/stdc++.h>
using namespace std;
void fx(int n)
{
    cout << n << endl;
    if (n > 0)
        fx(n - 1);
         cout << n<<endl;
}
int main()
{
    fx(4);
    return 0;
}