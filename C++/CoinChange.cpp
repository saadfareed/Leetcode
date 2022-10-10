#define ll unsigned long long int
int dp[10000];
class Solution {
public:
    
int coinChange(vector<int> coins,int amount)
{
    memset(dp,-1,sizeof(dp));
	int c =coinChange1(coins,amount);
    if (c >= INT_MAX)
		return -1;
	else
        return c;
}

int coinChange1(vector<int> coins,int amount)
{
    if (amount == 0) return 0;
    int c = INT_MAX;
	if (dp[amount] != -1) return dp[amount];
    for (int i = 0; i < coins.size(); i++)
    {
        if (amount - coins[i] >= 0)
            c = min((ll)c, (ll)coinChange1(coins,amount - coins[i])+1);
    }
        return dp[amount] = c;
}
};
