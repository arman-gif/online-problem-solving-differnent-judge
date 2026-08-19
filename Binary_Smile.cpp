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
        string a, b;
        cin >> a >> b;

        vector<int> sum, ans;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == '1')
            sum.push_back(i);

            if(b[i] == '1')
            ans.push_back(i);
        }

        if(sum.size() != ans.size())
        {
            cout << -1 << endl;
            continue;
        }

        int total = 0;
        for(int i = 0; i < sum.size(); i++)
        {
            if(sum[i] != ans[i])
            {
                total++;
            }
        }
        cout << total << endl;
    }

	return 0;
}

