#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    multiset<int> tickets;

    // vector<int> tickets(n);

    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        tickets.insert(val);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cin>>tickets[i];
    // }


    
    // vector<int> mx_price(m);

    for (int i = 0; i < m; i++)
    {
        int mx_price;
        cin>>mx_price;

        auto it = tickets.upper_bound(mx_price); //upper_bound returns next greater number 

        if(it == tickets.begin())  //means all tickets are greater then the max price
        {
            cout<<-1<<'\n';
        }
        else
        {
            it--;
            cout<<*it<<'\n';
            tickets.erase(it);

        }
    }   


    
    
    



    return 0;
}