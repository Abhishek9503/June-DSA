class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        
        sort(begin(arr), end(arr));
        
        int d = arr[1] - arr[0];
        
        for(int i = 2; i<n; i++) {
            if(arr[i] - arr[i-1] != d)
                return false;
        }
        
        return true;
    }
};