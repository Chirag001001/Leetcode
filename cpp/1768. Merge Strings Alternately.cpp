class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length();
        int n2 = word2.length();

        string s="";

        int p1 =0;
        int p2=0;

        while(p1<n1 && p2<n2){
            s = s+word1[p1];
            s = s+word2[p2];
            p1++;p2++;
        }

        while(p1<n1){
            s=s+word1[p1];
            p1++;
        }

        while(p2<n2){
            s=s+word2[p2];
            p2++;
        }

        return s;
    }
};
