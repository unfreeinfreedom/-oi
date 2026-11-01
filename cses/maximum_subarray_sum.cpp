#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    long long int n = 0, k = 0, b = 0;
    vector<long long int> v;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> k;
        v.push_back(k);
    }
    b = v[0], k = v[0];
    for(int i = 1; i < n; i++)
    {
        k = max(v[i], k + v[i]);
        b = max(b, k);
    }
    cout << b;
    return 0;
}
