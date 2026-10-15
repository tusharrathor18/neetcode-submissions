class Solution {
public:
    vector<int>dp;
    int f(vector<int>& cost, int i) {
        if (i >= cost.size()) {
            return 0;
        }

        if(dp[i] != -1) return dp[i];

        int a = cost[i] + f(cost, i + 1);
        int b = cost[i] + f(cost, i + 2);

        return dp[i] = min(a, b);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        dp.assign(n,-1);
        return min(f(cost, 0), f(cost, 1));
    }
};
