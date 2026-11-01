#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long int> v;
    string k = "", x = "";
    cin >> k;
    for(int i = 0; i < k.length(); i++)
    {
       if(i == k.length()-1)
       {
            x = x + k[i];
            v.push_back(stoi(x));
            break;
       }

       if (k[i] == '+')
       {
            v.push_back(stoi(x));
            x = "";
            continue;
       }
       x = x + k[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        if ( i == v.size()-1 )
        {
            cout << v[i] << "\n";
            break;
        }
        cout << v[i] << "+";
    }
    return 0;
}
