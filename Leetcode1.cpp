/*************************************************************************
	> File Name: Leetcode1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月16日 星期四 21时27分15秒
 ************************************************************************/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    vec.push_back(i);
                    vec.push_back(j);
                    return vec; 
                }
            }
        }
           return vec;
    }
};
