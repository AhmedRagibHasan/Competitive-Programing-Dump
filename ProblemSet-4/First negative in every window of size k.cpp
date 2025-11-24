// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1


class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int n =  arr.size();
        
        queue<int> q;
        vector<int> v;
        
        int l = 0,r=0;
        
        
        
        while(r<n)
        {
            if(arr[r] < 0)
            {
                q.push(arr[r]);
                
            }
            if(r-l+1 == k)
            {
                if(!q.empty())
                {
                    v.push_back(q.front());
                    if(arr[l] == q.front())
                    {
                        q.pop();
                    }
                    
                }
                else
                {
                    v.push_back(0);
                }
                
                l++, r++;
            }
            
            else
            {
                r++;
            }
            
        }
        
        return v;
        
    }
};