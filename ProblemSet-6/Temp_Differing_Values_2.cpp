#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        
        string s;
        cin >> s;
        
        int one = 0;
        int zero = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                zero++;
            }
            else
                one++;
        }
        
       // if(n %2 == 0 && one == zero)
       // {
       //     cout << "Yes" << endl;
       //     continue;
       // }
       // if(n % 2 == 0 && one != zero)
       // {
       //     cout << "No" << endl;
       //     continue;
       // }
        
        int i = 0;
        
        map<int, int> mp;
        
        mp[i] = 1;
        mp[i+k] = 1;
        zero--;
        one--;
        
         if(zero < 0 || one < 0)
        {
            cout << "No" << endl;
            continue;
        }
       
        
        while(i <= (n-k-1))
        {
            if(!mp[i])
            {
                zero--;
                one--;
                mp[i] = 1;
                mp[i+k] = 1;
            }
            i++;
        }
        
        if(zero < 0 || one < 0)
        {
            cout << "No" << endl;
        }
        else
            cout << "Yes" << endl;
        
    }

}
