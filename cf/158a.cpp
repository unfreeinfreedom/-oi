#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n = 0, k = 0, m = 0, s = 0, l = 0;
    vector<long long int> v;
    cin >> n >> k;
    for(int i = 0; i <= n; i++)
    {
        cin >> m;
        v.push_back(m);
    }
    for(int i = 0; i < n; i++)
    {
        if(v[i] >= v[k-1] && v[i] > 0){
            s++;
        }
    }
    cout << s;
    return 0;
}
