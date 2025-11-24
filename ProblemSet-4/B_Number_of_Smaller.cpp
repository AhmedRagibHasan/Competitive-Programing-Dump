#include <bits/stdc++.h>
using namespace std;


//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v1(n);

    vector<int> v2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    int cnt = 0, l = 0, r = 0;

    while (r < m)
    {
        if (v1[l] < v2[r] && l < n)
        {
            cnt++;
            l++;
        }
        else
        {
            cout<<cnt<<" ";
            r++;
        }
    }


    return 0;
}