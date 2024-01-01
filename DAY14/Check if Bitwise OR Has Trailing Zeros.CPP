class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int c=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]%2==0){
                c++;
            }
        }
        
        if(c>=2){
            return true;
        }
        return false;
            
        
    }
};
