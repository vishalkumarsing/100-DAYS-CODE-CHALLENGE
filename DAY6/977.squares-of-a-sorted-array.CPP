//easy

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        // int n=nums.size();
        for(int i=0;i<nums.size();i++){
            int num=(nums[i]*nums[i]);
            v.push_back(num);

        }
        sort(v.begin(),v.end());
        return v;
        
    }
};

