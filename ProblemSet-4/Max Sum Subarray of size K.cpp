

//  https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int l = 0, r= 0;
        long long ans = 0; 
        long long sum = 0;
        
        while(r<n)
        {
            sum += arr[r];
            if(r-l+1 == k)
            {
                ans = max(ans,sum);
                
                sum -=arr[l];
                
                l++,r++;
            }
            else
            {
                r++;
            }
            
            
        }
        
        return ans;
    }
};