class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        int maxi=INT_MIN;
        for(int i=0;i<heights.size();i++){
            maxi=max(maxi,heights[i]);
        }

        vector <int> idx(maxi+1,0);

        for(int i=0;i<heights.size();i++){
            idx[heights[i]]=i;
        }

        sort(heights.begin(),heights.end());

        vector <string> ans;

        for(int i=0;i<heights.size();i++){
            ans.push_back(names[idx[heights[i]]]);
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
