class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int v=0;
        int n=batteryPercentages.size();
        for(int i=0;i<n;i++){
            int j=max(0,batteryPercentages[i]-v);
            if(batteryPercentages[i]>=j && j!=0){
                v++;
            }
            
        }
        return v;
        
    }
};
