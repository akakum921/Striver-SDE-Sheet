int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int maxProfit = 0;
    int mini = prices[0];
    for(int i = 1; i < n; i++){
        int cost = prices[i] - mini;
        mini = min(prices[i], mini);
        maxProfit = max(maxProfit, cost);
    }
    
    return maxProfit;
}