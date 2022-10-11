class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        
        int totalSum = n*(n+1)/2;
        
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        
        
        int remNum = totalSum - sum;
        return remNum;
    }
};