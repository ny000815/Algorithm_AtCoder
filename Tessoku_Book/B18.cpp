#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, S, A[10009];
bool dp[10009][10009];
int main(){
	cin >> N >> S;
	for (int i = 1; i <= N; i++) cin >> A[i];

	dp[0][0] = true;
	for(int j = 1; j <= S; j++) dp[0][j] = false;
	
	for(int i = 1; i <= N; i++){
		for(int j = 0; j <= S; j++){
			if(A[i] > j){
				if(dp[i-1][j] == true) dp[i][j] = true;
				else dp[i][j] = false;
			}
			if(A[i] <= j){
				if(dp[i-1][j] == true || dp[i-1][j-A[i]] == true) dp[i][j] = true;
				else dp[i][j] = false;
			}
		}
	}
	if (dp[N][S] == false){
  	cout << -1 << endl;
  	return 0;
	}
	int place = S;
	vector <int> nums;
	for(int i = N; i >= 1; i--){
	  if(dp[i -1][place] == true) continue;
	  else {
	    nums.push_back(i);
	    place -= A[i];
	  }
	}
	reverse(nums.begin(), nums.end());
	cout << nums.size() << endl;
	for(int i = 0; i < nums.size(); i++){
	  if (i >= 1) cout << " ";
	  cout << nums[i];
	}
	cout << endl;
	return 0;
}
