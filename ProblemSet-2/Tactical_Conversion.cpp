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
        cin>>n;
        string s;
        cin >> s;

        

        int count_1 = 0;

        int lenght = 0, maxlenght = 0;

        for (int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                count_1++;
                lenght++;
                maxlenght = max(maxlenght,lenght);
                
            }
            else
            {
                lenght = 0;
            }

        }

        

        

        if(count_1 == 2 && maxlenght == 2)
        {
            cout<<"No"<<'\n';
        }
        else if(count_1 == 3 && maxlenght == 3)
        {
            cout<<"No"<<'\n';


        }
        else
        {
            cout<<"Yes"<<'\n';


        }
        
    }

    return 0;
}