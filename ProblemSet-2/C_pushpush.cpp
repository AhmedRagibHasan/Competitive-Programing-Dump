#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    deque<int> dq;

    bool reverseflag = false;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        if(reverseflag)
        {
            dq.push_front(val);
        }
        else
        {
            dq.push_back(val);

        }

        reverseflag = !reverseflag;
    
    }

    if(reverseflag)
    {
        reverse(dq.begin(),dq.end());
    }

    

    

    for (int val : dq)
    {
        cout << val << " ";
    }

    cout << '\n';

    return 0;
}