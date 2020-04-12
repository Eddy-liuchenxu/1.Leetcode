/*************************************************************************
	> File Name: LeetCode374.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月12日 星期日 23时15分48秒
 ************************************************************************/
class Solution {
public:
    int guessNumber(int n) {
        int  l = 1, r = n;
        while(l <= r){
            int mid = l + ((r - l)>>1);
            if(guess(mid) == 0){
                return mid;
            }else if(guess(mid) == 1){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return l;
    }
};
