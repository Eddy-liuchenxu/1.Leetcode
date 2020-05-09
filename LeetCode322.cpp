/*************************************************************************
	> File Name: LeetCode322.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月09日 星期六 22时01分58秒
 ************************************************************************/
class Solution {
public:
//状态：也就是原问题和子问题中变化的变量，也就是总金额
//然后确定 dp 数组的定义：dp[i]代表在总金额i所需的最少的硬币个数
//然后确定「选择」并择优，也就是对于每个状态，可以做出什么选择改变当前状态。具体到这个问题，无论当的目标金额是多少，选择就是从面额列表 coins 中选择一个硬币，然后目标金额就会减少：
//最后明确 base case，显然目标金额为 0 时，所需硬币数量为 0；当目标金额小于 0 时，无解，返回 -1：
    int coinChange(vector<int>& coins, int amount) {
       // 数组大小为 amount + 1，初始值也为 amount + 1
    vector<int> dp(amount + 1, amount + 1);
       dp[0] = 0;
        for(int i = 0; i < coins.size(); i++){
            for(int j = 1; j <= amount; j++){
                if(j >= coins[i]){
                      dp[j] = min(dp[j],dp[j-coins[i]]+ 1);
                }
              
            }
        }

        return dp[amount] == amount + 1 ? -1 : dp[amount] ;

    }
};
