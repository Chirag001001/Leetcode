class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

        int maxi = INT_MIN;
        for(int i=0;i<sentences.size();i++){
            int counter =1;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    counter=counter+1;
                }
            }
            maxi = max(maxi,counter);
        }

        return maxi;
    }
};
