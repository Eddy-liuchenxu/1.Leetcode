/*************************************************************************
> File Name: 34.cpp
> Author: 
> Mail: 
> Created Time: 2020年04月10日 星期五 21时17分41秒
************************************************************************/
class Solution {
    public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vec;
        if(nums.size()!= 0){
            int l = 0,r = nums.size() - 1,mid;
            while(l != r){
                mid = l + ((r-l)>>1);
                if(nums[mid] < target){
                    l = mid + 1;
                }else if(nums[mid] >= target){
                    r = mid;
                }
            }
            if(nums[l] == target){
                vec.push_back(l);
            }else{
                vec.push_back(-1);
            }
            l = 0,r = nums.size() - 1;
            while(l != r){
                mid = l + ((r-l)>>1) + 1;
                if(nums[mid] <= target){
                    l = mid;
                }else if(nums[mid] > target){
                    r = mid - 1;
                }
            }
            if(nums[l] == target){
                vec.push_back(l);
            }else{
                vec.push_back(-1);

            }
        }else{
            vec.push_back(-1);
            vec.push_back(-1);
        }
        return vec;
    }
};
