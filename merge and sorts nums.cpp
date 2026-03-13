#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2,int n){
			vector<int> nums(m+n);
			for(int i=0;i<m;i++){
			nums[i]=nums1[i];
			}
			for(int i=0;i<n;i++){
			nums[i+m]=nums2[i];
			}
			nums1=nums;
			m+=n;
			n=0;
			
			for(int i=0;i<m+n-1;i++){
				for(int j=i+1;j<m+n;j++){
					if(nums1[j]<nums1[i]){
						int a=nums1[j];
						nums1[j]=nums1[i];
						nums1[i]=a;
					}
				}
			}
}
};
int main(){
	Solution sol;
	int a,b;
	cin>>a>>b;
	vector<int> nums1(a);
	int m;
	vector<int> nums2(b);
	int n;
	//cin>>nums1>>nums2;
	for(int i=0;i<a;i++){
		cin>>nums1[i];
	}
	for(int i=0;i<b;i++){
		cin>>nums2[i];
	}
	cin>>m>>n;
	sol.merge(nums1,m,nums2,n);
	for(int i=0;i<m+n;i++){
		cout<<nums1[i]<<" "; 
	}
}

