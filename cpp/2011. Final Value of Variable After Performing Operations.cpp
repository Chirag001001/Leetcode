class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

        int counter =0;

        for(int i=0;i<operations.size();i++){
            if(operations[i]=="++X" || operations [i]=="X++"){
                counter++;
            }
            else{
                counter--;
            }
        }

        return counter;
    }
};
