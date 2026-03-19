#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        set<int> st;


        for (int i = 0; i < n ; i++)
        {
            st.insert(i);
        }


        long long score = 0;


        for (int i = n; i > 0; i = i-2)
        {
            int x = i;

            int y = i-1;

            score += max(x,y);
            
            st.erase(x);
            st.erase(y);


            int andv = x & y;

            if(st.find(andv) == st.end() )
            {
                st.insert(andv);
            }


        }
        
        

        
            
        

        cout << score << "\n";
    }

    return 0;
}