class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy=prices[0];
        for(int x: prices){
            if(x>buy)profit=max(profit,x-buy);
            else buy=x;
        }
        return profit;
    }
};