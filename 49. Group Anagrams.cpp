#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    	unordered_map<string,vector<string>> map;
    	for(string s:strs){
    		string key;
    		key =s;//gan s cho key
    		sort(key.begin(),key.end());//sap xep key de ra key
    		map[key].push_back(s);//gom vao map co key tuong ung
		}
		//den day nhung tu co cung key da duoc gom vao 1 map[key] tuong ung
		//tiep theo cho tung map[key] vao vector<vector<string>>
		vector<vector<string>> result;
		for(auto s:map){//van de doan nay
			result.push_back(s.second);//bo thanh phan thu 2 cua group map(chinh la vector<string> vao result
		}
		return result;
	}
    
};
int main(){
	Solution sol;
	vector<string> strs={"eat","tea","tan","ate","nat","bat"};
	for(auto x:sol.groupAnagrams(strs)){
		for(auto y:x){
			cout<<y<<" ";
		}
		cout<<endl;
	}
}

