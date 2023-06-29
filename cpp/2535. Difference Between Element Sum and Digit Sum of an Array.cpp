class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

        int counter1=0;
        int counter2=0;
        for(int i=0;i<nums.size();i++){
            counter1=counter1+nums[i];

            while(nums[i]!=0){
                counter2 = counter2 + nums[i]%10;
                nums[i]=nums[i]/10;
            }
        }

        return abs(counter1-counter2);
    }
};
