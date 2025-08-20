class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr_profit = 0;     // profit for current day
        int max_profit = 0;      // overall maximum profit so far
        int buy = prices[0];     // assume we buy on day 0 (minimum price so far)

        // loop from day 1 to end
        for(int i = 1; i < prices.size(); i++) {
            
            // agar current price chhoti hai "buy" se → update buy
            // means yeh new minimum price ban gaya
            if(prices[i] < buy) {
                buy = prices[i];
            }

            // calculate profit if we sell today
            curr_profit = prices[i] - buy;

            // check if this is the best profit so far
            max_profit = max(max_profit, curr_profit);
        }

        // agar koi profit possible nahi hai (prices always decreasing)
        // to max_profit 0 hi rahega
        return max_profit;
    }
};
