class Solution {
public:
    int countPrimes(int n) {


    vector <bool> arr (n,false);

	for(int i=2;i<sqrt(n);i++){
		if(arr[i]==false){
			for(int j=i*i;j<n;j=j+i){
				arr[j]=true;
			}
		}
	}

int ans =0;
    for(int i=2;i<n;i++){
        // cout<<arr[i]<<","<<i<<endl;
        if(arr[i]==false){
            ans++;
        }
    }
    return ans;
    }
};
