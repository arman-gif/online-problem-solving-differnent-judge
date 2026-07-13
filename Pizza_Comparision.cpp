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
        int a, b;
        cin >> a >> b;

        int sum = 100 * b;
        int ans = 225 * a;

        if(sum > ans)
        {
            cout << "Small" << endl;
        }
        else if(sum < ans)
        {
            cout << "Large" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }
    

	return 0;
}


