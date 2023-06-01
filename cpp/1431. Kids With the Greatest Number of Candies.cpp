class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> v;
        for(int i=0;i<candies.size();i++){
                int ar = candies[i]+extraCandies;
                bool t = true;
            for(int j=0;j<candies.size();j++){
                if(ar<candies[j]){
                    t = false;
                    break;
                }
            }
            v.push_back(t);
        }
        return v;
    }
};
