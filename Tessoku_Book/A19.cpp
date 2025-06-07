#include <iostream>
#include <algorithm>
using namespace std;

int N, W, w[109], v[109];
long long dp[109][100009];

int main(){
	cin >> N >> W;
	for(int i = 1; i <= N; i++){
		cin >> w[i] >> v[i];
	}

  for(int i = 0; i <= N; i++){
    for(int j = 0; j <= W; j++) dp[i][j] = 0;
  }

	for(int i = 1; i <= N; i++){
		for(int j = 0; j <= W; j++){
			 if(w[i]  > j) dp[i][j] = dp[i-1][j];
			 else dp[i][j] = max(dp[i - 1][j - w[i]] + v[i], dp[i-1][j]);
		}
	}
	long long answer = 0;
	for(int j = 1; j <= W; j++) answer = max(answer, dp[N][j]);
	cout << answer << endl;
	return 0;
}
