/*************************************************************************
	> File Name: LeetCode441.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月12日 星期日 23时40分27秒
 ************************************************************************/
class Solution {
public:
    int arrangeCoins(int n) {
        if(n == 0) return 0;
        long long l = 1,r = n;
        while(l < r){
            long long  mid = l + ((r - l + 1)>>1);
            if((mid * mid + mid)/2 <= n){
                l  = mid;
            }else{
                r = mid - 1;
            }
        }
            return l;
        
    }
};
