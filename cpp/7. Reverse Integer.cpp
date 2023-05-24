class Solution {
public:
    int reverse(int x) {
        long n=0;
        int counter =0;
        int y = x;
        while(x!=0){
            int rem = x%10;
            x = x/10;
            counter = counter +1;
        }

        long a = 1;

        for(int i=0;i<counter-1;i++){
            a = a*10;
        }
        // cout<<y<<endl;
        // cout<<a<<endl;
        while(y!=0){
            int re = y%10;
            y = y/10;
            if(n+(re*a)>2147483648 || n+(re*a)<-2147483648 ){
                return 0;
            }
            n = n+(re*a);
            a = a/10;
        }

        return n;

    }
};

// 2147483648
