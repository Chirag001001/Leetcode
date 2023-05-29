class Solution {
public:

    int idx(vector<int>& nums, int target,int st,int en){
        int x =-1;

        while(st<=en){
            int mid = (st + en)/2;
            // cout<<mid<<endl;
            if(nums[mid]==target){
                x= mid;
                break;
            }
            else if(nums[mid]<target){
                st = mid+1;
            }
            else if(nums[mid]>target){
                en = mid-1;
            }
        }
        return x;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int idx1 = idx(nums,target,0,nums.size()-1);
        int f = idx1;
        int l = idx1;

        while(1){
            int right = idx(nums,target,f+1,nums.size()-1);   //is sbaad vale for last occ
            int left = idx(nums,target,0,l-1);    // is s pehle vale for first occ

            if(right==-1 && left==-1 ){
                break;
            } //dono occ milgyi

            else if(left !=-1){
                l=left;
            }
            else if(right !=-1){
                f=right;
            }
        }

        vector <int> v;
        v.push_back(l);
        v.push_back(f);
        return v;
    }
};
