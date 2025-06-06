#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void f()
{
    cout << cnt << endl;
    cnt++;
    if (cnt == 10)
    {
        cout << "STOPPED";
    }
    else
        f();
}
int main()
{
    f();
    return 0;
}