#include <bits/stdc++.h>
using namespace std;

//code
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        

        for (int i = 0; i < n; i++)
        {

            b[i] = n - a[i] + 1;
        }

        for(int v : b)
        {
            cout<<v<<" ";
        }

        cout<<"\n";
    }
    return 0;
}