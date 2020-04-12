/*************************************************************************
	> File Name: LeetCode475.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月13日 星期一 02时05分42秒
 ************************************************************************/
class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
         int ans=0;
         sort(heaters.begin(),heaters.end());
         if(heaters.size() == 0) return 0;
        //for(vector<int>::iterator it = houses.begin(); it != houses.end();it++){
         for(int i = 0; i <= houses.size()-1; i++){ 
            int temp = 0;
            int l = 0, r = heaters.size() -1;
            while(l < r){
                int mid = l + ((r - l )>>1);
                if(houses[i] <= heaters[mid]){
                    r= mid ;
                }else{
                    l = mid  + 1;
                   
                }
            }
       
            if(l != 0) {
            if(abs(houses[i] - heaters[l]) > abs(houses[i] - heaters[l-1])){
                 temp = abs(houses[i] - heaters[l-1]);
              
            }else{
                temp = abs(houses[i] - heaters[l]);
           
            }
            }else{
                temp = abs(houses[i] - heaters[l]);
             
            }
            if(temp > ans){
                ans = temp;
            }
            
        }
        return ans;
    }
};
