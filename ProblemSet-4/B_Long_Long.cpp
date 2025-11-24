#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
    {
        int n;

        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long max_sum = 0;

        int op = 0;

        bool negflag = false;

        for (int i = 0; i < n; i++) 
        {
            
            max_sum += abs(a[i]);

            if (a[i] < 0)
            {
                if(!negflag) 
                {
                    op++;
                    negflag = true;
                }
            } 
            else if(a[i] > 0) 
            {
                negflag = false;
            } 
           
        }

        cout << max_sum << " " << op << "\n";
    }

    return 0;
}
