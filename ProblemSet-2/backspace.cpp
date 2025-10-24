#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    string s;

    cin>>s;

    string final;

    for(char c : s)
    {
        if(c == '<')
        {
            final.pop_back();
        }
        else
        {
            final.push_back(c);
        }
    }
    
    cout<<final<<'\n';
    
    return 0;
}


 
