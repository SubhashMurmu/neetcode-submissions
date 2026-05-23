class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> arr ;

        for(int num : nums){
            arr[num]++ ;
        }

        int max = 0 ;
        int ans = 0 ;

        for(auto n : arr){
            if(n.second > max){
                max = n.second ;
                ans = n.first ;
            }
        }

        return ans ;
    }
};