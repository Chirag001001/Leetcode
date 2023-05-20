class Solution {
public:

    string tostr(int x){
        string s ="";
        if(x>0){
            while(x!=0){
                int rem = x%10;
                x = x/10;
                s = s + char(rem+48);
            }
            return s;
        }
        else if(x<0){
            long long a = x;
            a = -a;
            s = s +'-';
            while(a!=0){
                int rem = a%10;
                a = a/10;
                s = s + char(rem+48);
            }
            return s;
        }
        else{
            return "0";
        }
    }

    bool isPalindrome(int x) {
        // cout<<'0'-0<<endl;;
        // cout<<char(0+48);
        // cout<<tostr(x)<<endl;

        string a = tostr(x);
        bool f = true;
        for(int i=0;i<(a.length())/2;i++){
            if(a[i]==a[a.length()-1-i]){
                continue;
            }
            else{
                f = false;
                return false;
                break;
            }
        }
        if(f){
            return true;
        }
        else{
            return false;
        }
    }
};
