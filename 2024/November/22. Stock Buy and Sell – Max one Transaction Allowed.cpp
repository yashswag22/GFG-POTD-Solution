class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
       
       int ans = 0;
       int n= prices.size();
       //---- iss se tle aarha tha, only 1110 case pass ho rha tha ----
    //   for(int i=0;i<n-1;i++){
    //       int futmax = *max_element(prices.begin()+i+1,prices.end());
    //       ans = max(ans, futmax-prices[i]);
    //   }
    //   return ans;
        int output[n];  // to store the max from it's right
        int maxRight = prices[n - 1];  // Start with the last element, as it has no element to its right
        output[n - 1] = -1; // For the last element, there is no element to the right, so assign -1
    
    // Traverse the array from second last element to the first element
    for (int i = n - 2; i >= 0; --i) {
        output[i] = maxRight;  // Store the largest element to the right of the current element
        maxRight = max(maxRight, prices[i]);  // Update the maxRight if the current element is larger
    }
    
    for(int i=0;i<n-1;i++){
        int futmax = output[i];
        ans = max(ans, futmax-prices[i]);
    }
    return ans;
    
    }
};
