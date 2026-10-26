class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx = 0;
        for(int j=0 ; j<nums.size() ; j++){
            if( j > mx ) return false ;
            mx  = max( mx , j + nums[j]);
            if( mx >= nums.size() -1 ) return true;
        }
        return false ;  
    }
};
