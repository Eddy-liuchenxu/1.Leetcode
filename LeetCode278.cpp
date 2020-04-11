/*************************************************************************
	> File Name: LeetCode278.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月12日 星期日 01时39分57秒
 ************************************************************************/

class Solution {
public:
    int firstBadVersion(int n) {
        //if(n <= 1) return 1;
        long long l = 1,r = n ,mid;
        while(l != r){
             mid = l + ((r-l)>>1);
            if(isBadVersion(mid) ){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        return l;
    }
};
