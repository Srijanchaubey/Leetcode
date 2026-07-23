class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e= nums.size()-1, ans = -1;
        int mid= s + (e-s)/2;
        if(nums[s]> nums[e]){ //roated array only
        while(s<e){
            if(nums[mid]>=nums[0]){
                s = mid + 1;
            }
            else{
                e = mid;
            }
            mid= s + (e-s)/2;
        }
        int pivot = s;

        if(target>=nums[0] && target<=nums[pivot-1]){
            s = 0, e = pivot-1;
        }
        if(target>=nums[pivot] && target<=nums[nums.size()-1]){
            s = pivot, e = nums.size()-1;
        }
        while(s<=e){
            mid= s + (e-s)/2;
           if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }
        }
    
    else{
        s = 0, e = nums.size()-1;
        while(s<=e){
            mid= s + (e-s)/2;
           if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }

    }
    return ans;
}
};