#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    bool a[26] = {false};

    for (int i = 0; i < s.size(); i++)
    {
        int idx = s[i] - 'a';
        
        a[idx] = true;
    }

    bool found = false;

    for (int i = 0; i < 26; i++)
    {
        if(a[i] == false)
        {
            cout<<char(i + 'a')<<'\n';
            found = true;
            break;
        }
        
       
    }

    if(!found)
    {
            cout<<"None"<<'\n';


    }
    
    


    return 0;
}