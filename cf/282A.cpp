#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n = 0, x = 0;
    string k;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> k;
        if(((k[0] == '+' && k[1] == '+') || (k[1] == '+' && k[2] == '+')))
        {
            x++;
        } else {
            x--;
        }
    }
    cout << x << "\n";
    return 0;
}
