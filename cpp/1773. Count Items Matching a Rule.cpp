class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int c;
        if(ruleKey=="type"){
            c=0;
        }
        else if(ruleKey=="color"){
            c=1;
        }
        else{
            c=2;
        }

        int counter=0;

        for(int i=0;i<items.size();i++){
            if(items[i][c]==ruleValue){
                counter++;
            }
        }

        return counter;
    }
};
