class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,bool> hash;
        for(int i = 0 ; i <nums.size() ;i++){
            if(hash[nums[i]] == true){
                return true ;
            }else {
                hash[nums[i]] = true ;
            }
        }
        return false ;

    }
};