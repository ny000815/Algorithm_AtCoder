#include <iostream>
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
	if(dp[N][S] == true) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
