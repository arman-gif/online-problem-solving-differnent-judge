#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    int ans = x == a && y < b;

    if(x < a || ans)
    {
        cout << "Bob";
    }
    else
    {
        cout << "Alice";
    }

	return 0;
}

