#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;

        cin >> s;

        set<char> st;

        for (int i = 0; i < n; i++)
        {

            st.insert(s[i]);
        }

        vector<char> v(st.begin(), st.end());

        vector<char> v_reverse = v;

        reverse(v_reverse.begin(),v_reverse.end());


        int vsize = v.size();
        



        map<char, char> mp;


        for (int i = 0; i < vsize; i++)
        {

            mp[v[i]] = v_reverse[i];
        }


        for(char c : s)
        {
            cout<<mp[c];
        }
        cout << '\n';
    }

    

    return 0;
}