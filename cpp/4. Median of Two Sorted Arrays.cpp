class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> num;
        int n1=0;
        int n2=0;
        while(n1<nums1.size() && n2<nums2.size()){
            if(nums1[n1]<=nums2[n2]){
                num.push_back(nums1[n1]);
                n1++;
            }
            else if(nums1[n1]>nums2[n2]){
                num.push_back(nums2[n2]);
                n2++;
            }
        }
        while(n1<nums1.size()){
                num.push_back(nums1[n1]);
                n1++;
        }  
        while(n2<nums2.size()){
                num.push_back(nums2[n2]);
                n2++;
        }

        if(num.size()%2!=0){
            int median = num.size()/2;
            return(num[median]);
        }
        else if(num.size()%2==0){
            int median1 = num.size()/2;
            int median2 = median1-1;
            // cout<<median1<<median2<<endl;
            return((num[median2]+num[median1])/2.0);
        }
        else{
            return -1;
        }

        // for(int i=0;i<num.size();i++){
        //     cout<<num[i]<<" ";
        // }
        // return -1;
    }
};
