class Solution {
  public:
   vector<int> sumClosest(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());  // Sort the array first.
    
    map<int, vector<pair<int, int>>> m;  // Map to store differences and pairs of indices.
    
    int curr_diff = INT_MAX;  // Initialize the current minimum difference.
    int n = arr.size();
    int s = 0, e = n - 1;  // Two pointers: one at the start, one at the end.
    
    while (s < e) {
        int sum = arr[s] + arr[e];
        int temp_diff = abs(target - sum);  // Calculate the absolute difference from the target.
        
        m[temp_diff].push_back(make_pair(arr[s], arr[e]));  // Store the pair of indices by difference.

        // Move the pointers to get closer to the target.
        if (sum <= target) {
            s++;  // If sum is smaller than target, move the left pointer right.
        } else {
            e--;  // If sum is larger than target, move the right pointer left.
        }
    }
    
    // Now, find the pair with the smallest difference from the target.
    vector<int> ans(2,-1);
    
    for (auto& x : m) {  // Iterate through the map, sorted by the difference.
        if (!x.second.empty()) {
            int diff = INT_MIN;
            for (auto& y : x.second) {
                // Calculate the absolute difference between the indices.
                int cur_dif = abs(y.first - y.second);
                if (cur_dif >= diff) {
                    ans[0] = y.first;  // Store the first index of the closest pair.
                    ans[1] = y.second; // Store the second index of the closest pair.
                    diff = cur_dif;
                }
            }
            break;
        }
    }
    vector<int>emptyy;
    if(arr.size()<=1) return emptyy;
    
    // if(target !=0 && ans[0]==0 && ans[1]==0 ) return emptyy;
    
    return ans;
}
};
