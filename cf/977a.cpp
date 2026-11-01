#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int x = 0, k = 0;
    cin >> x >> k;
    for(int i = 0; i < k; i++)
    {
        if ( x % 10 == 0)
        {
            x = x/10;
        } else 
        {
            x--;
        }
    }
    cout << x;
    return 0;
}
