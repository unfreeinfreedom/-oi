#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int x = 0, k = 0;
    vector<int> a, b;
    cin >> x;
    for(int i = 0; i < x; i++){
        cin >> k;
        a.push_back(k);
    }
    for(int i = 0; i < x; i++){
        cin >> k;
        b.push_back(k);
    }
    for(int i = 0; i < x; i++){
        cout << a[i] << "\n" << b[i] << "\n";
    }
    return 0;
}
