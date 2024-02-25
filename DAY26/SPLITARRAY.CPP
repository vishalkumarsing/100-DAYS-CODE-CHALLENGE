DAY 26

class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int,int>mp;
            for(int i=0;i<nums.size();i++){
                mp[nums[i]]++;
                
            }
        int n=nums.size();
        bool flag=true;
        for(auto it:mp){
            if(it.second>2){
                flag =false;
                break;
            }
        }
        return flag;
        
    }
};
