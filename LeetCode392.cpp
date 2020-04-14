/*************************************************************************
	> File Name: LeetCode392.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月13日 星期一 20时48分26秒
 ************************************************************************/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l = 0, ssize=s.size();
        int r = 0,tsize = t.size();
        while(l<ssize && r <tsize){
            if(s[l]==t[r]){
                l ++;
            }
            r++;
        }
        if(l == ssize){
            return true;
        }
        return false;
    }
};
