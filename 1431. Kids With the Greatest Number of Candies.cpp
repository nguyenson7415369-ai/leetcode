#include <iostream>
#include <vector>
#include<string>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
	    	int j=0;
	        int k=0;
	        for(int i=0;i<moves.size();i++){
	        	if(moves[i]=='U') j++;
	        	else if(moves[i]=='D') j--;
	        	else if(moves[i]=='L') k++;
	        	else if(moves[i]=='R') k--;
			}
			return (j==0&&k==0);
	}
};
int main() {
	Solution a;
    string moves;
    cin>>moves;
    bool check =a.judgeCircle(moves);
    cout<<(check ? "true":"false");
    return 0;
}


