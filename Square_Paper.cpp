#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int a, b;
    cin >> a >> b;

    int sum = min(a, b);
    int ans = sum * sum;
    cout << ans;

	return 0;
}


