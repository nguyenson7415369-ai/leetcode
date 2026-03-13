#include<iostream>
#include<vector>
using namespace std;class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    	vector<int> nums1(k);
    	for(int i:nums){
    		nums1[i]=i;
		}
		int sum=0;
		int a=0;
		for(int i:nums1){
			sum+=i;
		}
       return sum/k; 
    }
};
int main(){
	Solution sol;
	vector<int> nums{1,12,-5,-6,50,3};
	int ans=sol.findMaxAverage(nums,4);
	cout<<ans;
}
