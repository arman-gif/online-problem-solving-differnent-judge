#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, f;
    cin >> x >> y >> f;

    int sum = 12 * x;
    int ans = 12 * y + f;
    int total = min(sum, ans);
    cout << total << endl;

	return 0;
}



