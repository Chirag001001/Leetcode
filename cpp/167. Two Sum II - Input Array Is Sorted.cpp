class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st=0;
        int en=numbers.size()-1;
        vector <int> v;

        while(st<=en){
            if(numbers[st]+numbers[en]==target){
                v.push_back(st+1);
                v.push_back(en+1);
                return v;
            }

            else if(numbers[st]+numbers[en]>target){
                en--;
            }

            else if(numbers[st]+numbers[en]<target){
                st++;
            }
        }

        return v;
    }
};
