#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<int, int> ans;
        int sum = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            ans[x]++;
            sum = max(sum, ans[x]);
        }
        int total = (sum + 1) / 2;
        cout << total << endl;
    }
    

	return 0;
}

