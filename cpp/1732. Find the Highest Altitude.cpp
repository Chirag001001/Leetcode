class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt;

        alt.push_back(0);

        int counter=0;
        for(int i=0;i<gain.size();i++){
            counter = counter+gain[i];
            alt.push_back(counter);
        }

        int ans=alt[0];

        for(int i=0;i<alt.size();i++){
            ans=max(ans,alt[i]);
        }

        return ans;
    }
};
