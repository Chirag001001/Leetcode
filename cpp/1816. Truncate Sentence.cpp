class Solution {
public:
    string truncateSentence(string s, int k) {
        int counter=1;
        string l="";

        for(int i=0;i<s.size();i++){

            if(s[i]==' '){
                counter++;
            }
            if(counter==k+1){
                break;
            }
            else{
            l=l+s[i];

            }
        }


        return l;
    }
};
