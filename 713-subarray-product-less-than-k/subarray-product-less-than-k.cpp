class Solution { 
public:
    int numSubarrayProductLessThanK(vector<int>& a, int k) {
      const int n = a.size();
    long long p = 1;
    int res = 0;
    for (int start = 0, end = 0; end < n; end++) {
 
        // Move right bound by 1 step. Update the product.
        p *= a[end];
 
        // Move left bound so guarantee that p is again
        // less than k.
        while (start < end && p >= k)
            p /= a[start++];
 
        
        if (p < k) {
            int len = end - start + 1;
            res += len;
        }
    }
 
    return res;
        
    }
};