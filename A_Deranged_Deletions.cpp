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
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> sum = a;
        sort(sum.begin(), sum.end());

        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            if(a[i] != sum[i])
            {
                ans.push_back(a[i]);
            }
        }

        if(ans.size() == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << ans.size() << endl;
            for(auto it : ans)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
    

	return 0;
}


