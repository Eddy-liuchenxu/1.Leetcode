/*************************************************************************
	> File Name: LeetCode852.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月13日 星期一 20时20分20秒
 ************************************************************************/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        /*if(A.empty()){
            return 0;
        }
        if(A.size() == 1){
            return 0;
        }*/
        int l = 0, r=A.size()-1,mid;
        while(l <= r){
            mid = l + ((r - l)>>1);
            if(A[mid] > A[mid - 1] && A[mid] < A[mid+1]){
                l = mid + 1;
            }else if(A[mid] > A[mid + 1] && A[mid] < A[mid-1]){
                r = mid-1;
            }else{
                return mid;
            }
        }
        return mid;
    }
};
