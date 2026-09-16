#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int sum = a - b;
    if(sum % 2 == 0)
    {
        cout << sum / 2;
    }
    else
    {
        cout << -1;
    }

	return 0;
}

