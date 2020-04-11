/*************************************************************************
	> File Name: LeetCode167.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月12日 星期日 01时16分30秒
 ************************************************************************/
class Solution {
public:
    int binary_search(vector<int>&numbers,int target){
        int l = 0,r = numbers.size()-1,mid;
        while(l < r){
            int mid = l + ((r - l + 1)>>1);
            if(numbers[mid] < target){
                l = mid;
            }else if(numbers[mid] > target){
                r = mid -1;
            }else{
                l++;
            }
        }
        if(target == numbers[l]) return l+1;
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> vec;
        for(int i = 0;i < numbers.size();i++){
            if(binary_search(numbers,target - numbers[i]) > 0){
                vec.push_back(i+1);
                vec.push_back(binary_search(numbers,target - numbers[i]));
                break;
            }
        }
        return vec;
    }
    //return vec;
};
