class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        while(left<right){
            right&=(right-1);
            cout<<right<<" ";
        }
        return right;
        
    }
};
