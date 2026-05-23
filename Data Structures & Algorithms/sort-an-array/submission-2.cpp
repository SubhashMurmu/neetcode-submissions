class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size() ;

        for(int i = 0 ; i<n ;i++ ){
            for(int j = i ; j<n ;j++ ){
                if(nums[j] < nums[i]){
                    int t = nums[i] ;
                    nums[i] = nums[j] ;
                    nums[j] = t ;
                }
            }
        }

        return nums ;
    }
};