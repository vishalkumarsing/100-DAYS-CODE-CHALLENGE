// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n=nums.size();
        
//         set<vector<int>> s;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n-2;i++){
//             for(int j=i+1;j<n-1;j++){
//                 for(int k=j+1;k<n;k++){
//                     if(nums[i]+nums[j]+nums[k]==0){
//                         s.insert({nums[i],nums[j],nums[k]});
//                     }
//                 }
//             }
//         }
//         vector<vector<int>> ans(s.begin(),s.end());
//         return ans;

        
//     }
// };
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> ans;
        for(int i=0; i<n-2; i++){
            int l=i+1,r=n-1;
            while(l<r)
            {
                if(nums[i]+nums[l]+nums[r]<0)
                l++;
                else if(nums[i]+nums[l]+nums[r]>0)
                r--;
                else
                {
                    set.insert({nums[i],nums[l],nums[r]});
                    l++;r--;
                }
            }
        }
        for(auto it : set){
            ans.push_back(it);
        }
        return ans;
    }
};
