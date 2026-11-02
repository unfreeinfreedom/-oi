#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long int x = 0, y = 0, z = 0;
    cin >> x >> y >> z;
    if (z >= x || z >= y)
    {
        cout << 1 << "\n";
        return 0;
    }
    else {
        cout << 0 << "\n";
    }
    return 0;
}
