/*************************************************************************
	> File Name: Leetcode面试题53I.在排序数组中查找数字I.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月15日 星期三 00时33分06秒
 ************************************************************************/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        /*int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                ans++;
            }
        }
        return ans;
    */
    if(nums.empty()){
        return 0;
    }
    int ans = 0;
    int l = 0, r = nums.size()-1;
    while(l != r){
        int mid = l + ((r - l)>>1);
        if(nums[mid] >= target){
            r = mid;
        }else{
            l = mid + 1;
        }
    }
    for(int n = l; n < nums.size(); n++){
        if(nums[n] != target){
            return ans;
        }else{
            ans++;
        }
    }
    return ans;
    }
};
