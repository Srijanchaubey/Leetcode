class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int i=1, j=numbers.size();
        for(int p=0; p<numbers.size(); p++){
            if(numbers[i-1]+numbers[j-1]==target){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
            else if(numbers[i-1]+numbers[j-1]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};