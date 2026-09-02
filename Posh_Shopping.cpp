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

        int ans[100];
        for(int i = 0; i < n; i++)
        {
            cin >> ans[i];
        }

        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum = max(sum, ans[i]);

            for(int i = 0; i < n; i++)
            {
                for(int j = i + 1; j < n; j++)
                {
                    if(ans[i] <= ans[j])
                    {
                        sum = max(sum, ans[i] + ans[j]);
                    }
                }
            }
        }

        cout << sum << endl;
    }

	return 0;
}

