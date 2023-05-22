class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> n1;
        for(int i=0;i<m;i++){
            n1.push_back(nums1[i]);
        }

        int ptr1=0;
        int ptr2=0;
        int ptr=0;

        while(ptr1<m && ptr2<n){
            if(n1[ptr1]<=nums2[ptr2]){
                nums1[ptr]=n1[ptr1];
                ptr++;ptr1++;
            }

            else if(n1[ptr1]>nums2[ptr2]){
                nums1[ptr]=nums2[ptr2];
                ptr++;ptr2++;
            }
        }

        while(ptr1<m){
            nums1[ptr]=n1[ptr1];
            ptr++;ptr1++;
        }

        while(ptr2<n){
            nums1[ptr]=nums2[ptr2];
            ptr++;ptr2++;
        }
    }
};
