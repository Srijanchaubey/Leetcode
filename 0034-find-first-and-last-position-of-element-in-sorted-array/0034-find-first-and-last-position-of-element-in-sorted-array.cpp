class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int s =0, e = nums.size()-1;
        int first = -1, last = -1;
        while(s<=e){
            if(nums[s]<target){
                s++;
            }
            else if(nums[e]>target){
                e--;
            }
            else if(nums[s]==target && nums[e]==target){
                first = s;
                last = e;
                break;
            }
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};