class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {

vector<int> v;

        for(int i=left;i<=right;i++){
            int k=i;
            int t = true;
            while(k>0){
                int rem = k%10;
                k=k/10;
                if(rem==0){
                    t = false;
                    break;
                }
                if(i%rem!=0){
                    t = false;
                    break;
                }
                
            }
            if(t){
                v.push_back(i);
            }
        }
        return v;
    }

};
