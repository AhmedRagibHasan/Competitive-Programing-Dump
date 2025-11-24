#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int best_index = 1;
        int best_speed = -1;

        for (int i = 1; i <= n; i++) {
            int d, t;
            cin >> d >> t;
            int speed = d / t;       // guaranteed integer

            if (speed > best_speed || (speed == best_speed && i < best_index)) {
                best_speed = speed;
                best_index = i;
            }
        }

        cout << best_index << "\n";
    }
}
