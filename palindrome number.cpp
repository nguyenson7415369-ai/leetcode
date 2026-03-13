#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    	vector<double> sum(nums.size()-k+1,0);
    	for(int i=0;i<k;i++){
    		sum[0]+=nums[i];
		}
        for(int i=0;i<nums.size()-k;i++){
        	sum[i+1]=sum[i]-nums[i]+nums[k+i];
		}
		double summax=sum[0];
		for(int i=0;i<nums.size()-k+1;i++){
			if(summax<sum[i]) summax=sum[i];
		}
    	return summax/k;
	}
};
int main(){
	Solution sol;
	vector<int> nums={0,1,1,3,3};
	cout<<sol.findMaxAverage(nums,4);
}

