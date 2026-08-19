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
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> p(n);
        for(int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        if(x == 0 && y == n)
        {
            int sum = min_element(p.begin(), p.end()) - p.begin();
            for(int i = sum; i< n; i++)
            {
                cout << p[i] << endl;
            }

            for(int i = 0; i < sum; i++)
            {
                cout << p[i] << endl;
            }

            cout << endl;
            continue;
        }
    }
    

	return 0;
}



