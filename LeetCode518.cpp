/*************************************************************************
	> File Name: LeetCode518.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月09日 星期六 23时02分48秒
 ************************************************************************/
class Solution {
public:
    int change(int amount, vector<int>& coins) {
         vector<int> dp(amount+1);
        dp[0] = 1;
        for(int i = 1; i <= coins.size(); i++){//选前i种硬币时
            for(int j = coins[i-1]; j <= amount; j++){
                dp[j] += dp[j-coins[i-1]];
            }
        }
        return dp[amount];
    }
    
};
