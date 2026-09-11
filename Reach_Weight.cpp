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

        int ans = n / 2;
        int sum = n % 2;
        int total = ans * 30 + sum * 20;
    
        cout << total << endl;
    }

	return 0;
}

