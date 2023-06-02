class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector <int> v;

        int maxi = INT_MIN;
        int mini = INT_MAX;

        for(int i=0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
            mini =min(mini,nums[i]);
        }
        if (maxi<0){
            maxi=0;
        }
        if(mini>0){
            mini=0;
        }
        vector <int> idx (maxi+1,0);
        vector <int> nidx (-mini+1,0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0)
            idx[nums[i]]++;

            if(nums[i]<0)
            nidx[-nums[i]]++;
        }

        int counter =0;
        int k=0;

        for(int i=0;i<nidx.size();i++){
            cout<<nidx[i]<<endl;
        }

        for(int i=nidx.size()-1;i>=0;i--){
            if(nidx[i]==1){
                nums[k]=-i;
                k++;
                v.push_back(-i);
                counter++;

            }
            else if(nidx[i]>=2){
                nums[k]=-i;
                k++;
                nums[k]=-i;
                k++;
                v.push_back(-i);
                v.push_back(-i);
                counter=counter+2;
            }
        }


        for(int i=0;i<idx.size();i++){
            if(idx[i]==1){
                nums[k]=i;
                k++;
                v.push_back(i);
                counter++;

            }
            else if(idx[i]>=2){
                nums[k]=i;
                k++;
                nums[k]=i;
                k++;
                v.push_back(i);
                v.push_back(i);
                counter=counter+2;
            }
        }

        return counter;
    }
};
