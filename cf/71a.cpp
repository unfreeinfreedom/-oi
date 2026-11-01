#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int x = 0, k = 0;
    string s;
    vector<string> v;
    cin >> x;
    for(int i = 0; i <= x; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    for(int i = 0; i < x; i++)
    {
        if (v[i].length() < 11)
        {
            cout << v[i] << "\n";
        } else {
            k = v[i].length();
            cout << v[i][0] + to_string(k-2) + v[i][k-1] << "\n";
        }
    }
    return 0;
}
