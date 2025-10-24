#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    deque<int> dq(n);

    for (int i = 0; i < n; i++)
    {
          cin>>dq[i];
    }

    int sereja = 0;

    int dima = 0;

    int turn = 0;

    while(!dq.empty())
    {
        int f = dq.front();
        int b = dq.back();
        int mx = max(f,b);

        if(turn % 2 == 0)
        {
            sereja = sereja + mx;
        }
        else
        {
            dima = dima + mx;
        }

        if(mx == f)
        {
            dq.pop_front();
        }
        else 
        {
            dq.pop_back();

        }

        turn++ ;


    }

    cout<<sereja<<" "<<dima<<'\n';
    
    


    return 0;
}