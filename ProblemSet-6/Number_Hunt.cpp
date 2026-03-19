#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int x;

        cin >> x;

        bool first_prime = false, second_prime = false;

        long long y = 0;

        if (x == 1 || x == 2)
        {
            cout << 6 << "\n";
        }
        else
        {

            for (int i = x; i < x + 30; x++)
            {

                // cout << "status of x : " << x << "\n";
                if (first_prime == false && isPrime(x))
                {

                    y = x;
                    first_prime = true;
                }
                else if (first_prime && isPrime(x))
                {
                    y = y * x;
                    second_prime = true;
                }
                if (first_prime && second_prime)
                {
                    break;
                }
            }

            cout << y << "\n";
        }
    }
    return 0;
}