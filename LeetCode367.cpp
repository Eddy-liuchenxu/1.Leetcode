/*************************************************************************
	> File Name: LeetCode367.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月12日 星期日 23时09分02秒
 ************************************************************************/
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l = 1,r = num;
        while(l < r){
            long long mid = l + ((r - l)>>1);
            if(mid * mid >= num){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        if(l * l == num){
            return true;
        } else{
            return false;
        }
    }
};
