/*************************************************************************
	> File Name: LeetCode35.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月12日 星期日 00时28分39秒
 ************************************************************************/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      /*  if(nums.empty()){
            return 0;
        }
        int l = 0, r = nums.size() - 1, mid;
        while(l < r){
            mid = l + ((r - l)>>1);
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                l = mid +1;
            }else{
                r = mid -1;
            }
        }
        if(nums[l] < target)
        return l + 1;
        return l;
    }*/
    if(nums.empty()){
        return 0;
    }
    if(nums[nums.size()-1]<target){
        return nums.size();
    }
    int l = 0, r = nums.size() - 1, mid;
    while(l!=r){
        mid =  l + ((r - l)>>1);
        if(nums[mid] < target){
            l = mid + 1;
        }else{
            r = mid;
        }
    }
    return l;
}
};
