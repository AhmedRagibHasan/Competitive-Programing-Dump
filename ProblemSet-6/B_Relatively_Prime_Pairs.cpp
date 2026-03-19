#include <bits/stdc++.h>
using namespace std;


//CF-1000

//Greedy-Math-NumberTheory 

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long l, r;

    cin >> l >> r;

    
    
    cout<<"YES"<<"\n";
    for (long long i = l,j=1; j <= (r-l+1)/2; i +=2 ,j++)
    {
        
        cout<<i<<" "<<i+1<<"\n";

    }
    

    return 0;
}