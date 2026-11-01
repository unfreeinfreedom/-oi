#include <bits//stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int x;
    cin >> x;
    while(true)
    {
        cout << x << " ";
        if(x == 1)
        {
            break;
        }
        
        if ((x % 2 ) == 0 )
        {
            x = x/2;
        }
        else if ((x % 2) != 0)
        {
            x = (x*3)+1;
        }
    }
    return 0;
