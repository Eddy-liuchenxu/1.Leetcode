/*************************************************************************
	> File Name: LeetCode69.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月12日 星期日 00时14分33秒
 ************************************************************************/
class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
       long long l = 0,r = x;
        while(l != r){
            long long mid = l + ((r - l + 1)>>1 );
            if(mid  <= x/mid ){
                l = mid;
            }else{
                r = mid - 1;
            }
        }
        return l;

    }
};
