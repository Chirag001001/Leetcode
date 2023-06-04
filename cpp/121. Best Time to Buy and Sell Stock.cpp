class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int curr_prof =0;

        for(int i=0;i<prices.size();i++){
            mini = min(mini,prices[i]);
            curr_prof=max(curr_prof,prices[i]-mini);
        }

        return curr_prof;
    }
};
