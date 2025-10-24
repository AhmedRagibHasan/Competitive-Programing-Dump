#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    bool flag_hiss = false;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 's' && s[i+1] == 's' )
        {
            flag_hiss = true;
            break;

        }
       
    }

    if(flag_hiss)
    {
        cout<<"hiss"<<'\n';

    }
    else
    {
        cout<<"no hiss"<<'\n';

    }
    

    return 0;
}