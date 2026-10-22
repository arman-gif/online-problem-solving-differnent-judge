#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    int sum;
    if(x > y)
    {
        sum = x - y;
    }
    else
    {
        sum = y - x;
    }

    int ans = sum - 1;
    cout << ans;

	return 0;
}

