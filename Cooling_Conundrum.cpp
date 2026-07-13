#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int sum = 0;
        for(int k = x; k > y; k--)
        {
            sum = sum + (k + 9) / 10;
        }
        cout << sum << endl;
    }
    

	return 0;
}


