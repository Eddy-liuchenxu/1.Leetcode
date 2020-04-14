/*************************************************************************
	> File Name: Leetcode面试题53II.0～n-1中缺失的数字.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月15日 星期三 00时45分37秒
 ************************************************************************/
class Solution {
public:
   // int i;
    int missingNumber(vector<int>& nums) {
     /*   for(i = 0; i < nums.size(); i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return i;*/
        if(nums.empty()){
            return 0;
        }
        int l = 0, r = nums.size()-1;
        while(l < r){
            int mid = l + ((r - l)>>1);
            if(nums[mid] != mid){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        if(l == nums[l]){
                return l + 1;
                }else{
                    return l ;
                }
    }
};
