#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string seq;
    long long int s = 0, k = 0;
    cin >> seq;
    for(int i = 0; i <= seq.length()-1; i++)
    {
        if (seq[i] == seq[i+1])
        {
            k++;
        }
        else {
            s = max(s, k);
            k = 0;
        }
    }
    cout << s+1;
    return 0;
