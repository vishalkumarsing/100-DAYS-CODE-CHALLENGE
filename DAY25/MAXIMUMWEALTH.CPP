class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        int sum=0;
        
        int n=accounts.size();
        int m=accounts[0].size();
        for(int i=0;i<n;i++){
            ans=0;
            for(int j=0;j<m;j++){
                ans+=accounts[i][j];

                
            }
            sum=max(ans,sum);

            
        }
        return sum;
        // return ans;     
    }
};
