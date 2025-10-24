#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int k = 0;
        int index[20];

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                index[k] = i + 1;
                k++;
            }
        }

        cout << k << endl;

        if (k > 0)
        {
            for (int i = 0; i < k; i++)
            {
                cout << index[i];
                if (i < k - 1)
                    cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}