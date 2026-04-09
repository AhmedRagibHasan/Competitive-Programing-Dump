#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        int small = 1;      
        int big = 3*n;       
        
        for(int i = 0; i < n; i++)
        {
            
            int a = big;       
            int b = big - 1;

            int c = small;

            big -= 2;

            small++;

            cout << a << " " << b << " " << c;


            if(i < n-1)
            {
                cout << " ";

            } 
        }
        cout << "\n";
    }
    
    return 0;
}