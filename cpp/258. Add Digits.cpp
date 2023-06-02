class Solution {
public:

    int once(int cop){
        int rem =0;
        while(cop>0){
            rem = rem + cop%10;
            cop = cop/10;
        }
        return rem;
    }

    int addDigits(int num) {
        while(num>=10){
            num = once(num);
        }
            return num;
    }
};
