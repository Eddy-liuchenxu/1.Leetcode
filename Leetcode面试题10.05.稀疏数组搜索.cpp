/*************************************************************************
	> File Name: Leetcode面试题10.05.稀疏数组搜索.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月14日 星期二 23时29分09秒
 ************************************************************************/
class Solution {
public:
    int findString(vector<string>& words, string s) {
        int  l = 0, r = words.size();
        while(l<r){
            int mid = l + ((r - l)>>1);
          //  cout<<mid<<endl;
            while( mid < r&&words[mid] == "" ){
                ++mid;
            //    cout<<mid << " "<<endl;
            }
            if(mid == r){
                r = l + ((r - l)>>1);
                continue;
            }
            if(words[mid] == s){
                //cout<<"1"<<endl;
                return mid;
            }else if(words[mid] > s){
                r = mid;
              //  cout<<"r"<< r <<endl;
            }else{
                l = mid + 1;
                //cout<<"l" << l<<endl;
            }
        }
     return -1;
    }
};
/*class Solution {
public:
    int findString(vector<string>& words, string s) {
        int left = 0, right= words.size();
        while(left<right){
            int mid = left + ((right-left)>>1);
            //处理mid为空的情况
            while(mid<right && words[mid]==""){
                ++mid;
            }
            if(mid==right){
                right = left + ((right-left)>>1);
                continue;
            }
            //二分查找模板
            if(words[mid]==s){
                return mid;
            }else if(words[mid]>s){
                right = mid;
            }else{
                left = mid+1;
            }
            
        }
        return -1;
    }
};
*/
