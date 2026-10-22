

#include <bits/stdc++.h>
using namespace std;
int main()
{

	int a, b;
    cin >> a >> b;

    int ans = a * 100;
    int sum = b - a;
    ans = ans + (sum * 150);

    cout << ans << endl;

	return 0;
}


