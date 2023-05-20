class Solution {
public:
    int divide(int dividend, int divisor) {
        long b = long(dividend)/long(divisor);
        b = floor(b);
        if(b>2147483647){
            return 2147483647;
        }
        if(b<-2147483648){
            return -2147483647;
        }
        return b;
    }
};
