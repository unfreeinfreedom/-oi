#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a = 0, b = 0;
    cin >> a >> b;
    cout << max(a+b, a-b) << "\n" << min(a+b, a-b) << "\n";
    return 0;
}
