#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<string> chat;

    // map<string,bool> mp;

    set<string> st;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        chat.push_back(s);
        st.insert(s);
        
        
        
    }

    reverse(chat.begin(),chat.end());

    for(auto c : chat)
    {
        if(st.find(c) != st.end() )
        {
            cout<<c<<'\n';
            st.erase(c);

        }
    }


    // for(auto [a,b] : mp)
    // {
    //     cout<<a<<'\n';
    // }

    

  

    return 0;
}