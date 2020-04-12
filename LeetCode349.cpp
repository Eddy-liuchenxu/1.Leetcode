/*************************************************************************
	> File Name: LeetCode349.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月12日 星期日 22时57分45秒
 ************************************************************************/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec;
        set<int> l(nums1.begin(),nums1.end());
        set<int> r(nums2.begin(),nums2.end());
        for(set<int>::iterator it = l.begin(); it!=l.end();it++){
            if(r.count(*it)){
                vec.push_back(*it);
            }
        }
        return vec;
    }
};
