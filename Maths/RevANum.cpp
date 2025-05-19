#include <iostream>
using namespace std;
    int reverse(int x) {
        long long reverse{};
        while(x != 0)
        {
            int lastdigit = x % 10;
            reverse = reverse * 10 + lastdigit;
            x = x / 10;
        }

        if(reverse < INT_MIN || reverse > INT_MAX)
        {
            return 0;
        }

        return reverse;
    }
int main()
{
    int t = 2;
    while (t--)
    {  
        int x;
        cin >> x;
        cout << reverse(x);
        // int n, revNum = 0;
        // cin >> n;
        // while (n > 0)
        // {
        //     int ld = 0;
        //     ld = n % 10;
        //     n = n / 10;
        //     revNum = (revNum * 10) + ld;
        // }
        // cout << revNum << endl;
    }
}