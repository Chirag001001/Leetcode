class Solution {
public:
    int strStr(string haystack, string needle) {
        int a = needle.size();
        
        for(int i=0;i<haystack.size();i++){
            int t = true;
            for(int j=0;j<a;j++){
                if(needle[j]==haystack[i+j]){
                    continue;
                }
                else{
                    t = false;
                    break;
                }
            }
            if(t==true){
                return i;
            }
        }
        return -1;
    }
};
